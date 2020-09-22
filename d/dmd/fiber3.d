import core.thread;
import std.stdio;
import std.range;
import std.concurrency;

alias FiberRange = std.concurrency.Generator;

void fibonacciSeries(){
  int c=0;
  int n=1;
  while(true){
    yield(c);
    const nn= c+n;
    c=n;
    n=nn;
  }
}

void main(){
  auto seris = new FiberRange!int(&fibonacciSeries);
  writefln("%(%s %)",seris.take(10));
}