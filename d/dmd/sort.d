
import std.random;
import std.stdio;
import std.algorithm;

void main(string [] args){
  double []va = new double [1_000_000];
  foreach( ref x;va){
    x=uniform(0.0,1.0);
  }
  va.sort();
  foreach( i;0..10){
    writeln(va[i]);
  }
}