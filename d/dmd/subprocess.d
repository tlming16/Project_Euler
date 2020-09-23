import std.process;
import std.stdio;
void main(){
  //std.process.browse("http://dlang.org/rdmd.html");// start brower 
  auto ls = std.process.executeShell("ls -l");
  if (ls.status==0){
    writeln(ls.output);
  }
}