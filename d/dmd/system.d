// dmd -m64 -run 
// dmd -m32 -run 
import std.stdio;
import std.system;

void main(){
  std.stdio.writeln(std.system.os);
  writeln(std.system.endian);
}