import core.thread;
// ref or out
void fibonacciSeries( out int cur){
  cur=0;
  int next=1;
  while(true){
    Fiber.yield();
    const nextNext = cur+ next;
    cur= next;
    next=nextNext;
  }
}
// Fiber(void f())
void main(){
  int cur;
  Fiber fiber = new Fiber(()=>fibonacciSeries(cur));
  foreach(int i;0..10){
    fiber.call();
    import std.stdio;
    writef("%s ",cur);
  }
}