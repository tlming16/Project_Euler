import std.stdio;
import std.range;
struct square{
  int b;
  int e;

  invariant{
    assert( b<=e);
  }
  bool empty() const {
    return b==e;
  }
  void popFront() {
    ++b;
  }
  int front() const {
    return b*b;
  }
  void popBack() {
    --e;
  }
  int back() const {
    return (e-1)*(e-1);
  }
  square save() const {
    return this;
  }
}

void main(){
  foreach( e;square(0,10)){
    writeln(e);
  }
  writeln("reverse:");
  foreach(e;square(0,10).retro){
    writeln(e);
  }
}