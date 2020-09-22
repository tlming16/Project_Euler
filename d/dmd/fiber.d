import core.thread;
import std.stdio;

void fiberFunction(){}

class myFiber:Fiber{
  this(){
    super(&run);
  }
  void run(){
    Fiber.yield();
  }
}

void main(){
  auto fiber = new Fiber(& fiberFunction);
  writeln(typeof(fiber).stringof);
  fiber.call();
  auto myf= new myFiber();
  writeln(typeof(myf).stringof);
  myf.call();
  writeln(fiber.state);
  writeln(myf.state);
}