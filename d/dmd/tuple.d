import std.stdio;
import std.typecons:tuple;
import std.meta;
alias tuple = std.typecons.tuple;
alias arguments=AliasSeq!(1,"hello",2.5);
void main(){
  auto t =tuple!(int,"a",int ,"b")(12,12);
  auto d = tuple(42,"hello");
  writeln(d);
  writeln(t);
  writeln(t.a,t.b);
  writeln([t.expand,t[]]);
  foreach( i,m;t){
    writefln("%s,%s",i,m);
  }
  writeln(arguments);
  auto s= S!(double,int)([1,2,3,4]);
  writeln(s.length());
  writeln(s);
}

import std.conv;
struct S(Et,Es){
  Et[] arr;
  @property Es length() {
    return to!Es(arr.length);
  }
}
