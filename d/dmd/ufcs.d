import std.stdio;
import std.array;
import std.algorithm;
import std.string;
import std.file;
import std.range;
void main(){
  
  [1,2,3,4,5].map!(a=>a*a).array.sort.writeln();
}