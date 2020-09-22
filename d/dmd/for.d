// file for.d 
// dmd -run for.d 

import  std.stdio;
void main(){
  for ({int i=0;double d=0.5;}i<50;i++){
    writeln(" i:= ",i," d:= ",d);
    d/=2;
  }
  int cnt=0;
  for(;;){
    writeln( "forever" );
    cnt++;
    if (cnt>5) break;
  }

  foreach(int i,x;[1,2,3,4]){
    writefln(" value of [%s] is %s ",i,x);
  }
}