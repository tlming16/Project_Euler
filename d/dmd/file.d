import std.file;
import std.stdio;
import std.conv;
void main(){

  std.file.write("test.out",[1,2,3,4]);
  int [] b;
  b=cast(int [])std.file.read("test.out");
  writeln(b);
  writeln(int.sizeof);
  scope(exit) {
    std.file.remove("test.out");
  }
}