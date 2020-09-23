import std.path;
import std.file:getcwd;
import std.stdio;
void main(){

  writeln(getcwd());
  string s= getcwd();
  string t= s~"/test.d";
  writeln(baseName(t,".d"));
  writeln(baseName("/usr/bin/gcc").stringof);
  writeln(dirName(""));
  writeln(dirName("/root/"));


}