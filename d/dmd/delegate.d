import std.stdio;

struct mystruct{
  int i;
  void fun(){
    writefln("value is %d",i);
  }
}

void main(){
  auto o = mystruct(10);
  auto d = & o.fun;
  assert(d.funcptr==&mystruct.fun);
  assert(d.ptr==&o);
  void delegate() dd;
  assert( dd is null);
  dd.funcptr = & mystruct.fun;
  dd.ptr = & o;
  dd();
  d();

}