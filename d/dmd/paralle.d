import std.parallelism;
import std.algorithm.iteration:map;
import std.math:approxEqual;
import std.parallelism:taskPool;
import std.range:iota;
import std.stdio:writefln;

void main(){
  enum n=1_000_000;
  enum delta =1.0/n;

  alias getItem= (int i){
     immutable x= (i-0.5)* delta;
     return delta/(1.0+ x*x);
  }; 
  immutable pi = 4.0 * taskPool.reduce!("a+b")(n.iota.map!getItem);
  writefln("pi =%f",pi);
}