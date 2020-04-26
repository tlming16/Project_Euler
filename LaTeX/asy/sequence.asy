size(6cm,8cm,true);
import fontsize;
import graph;

real f(real x){
  return 1/4*(4*x-3);
}

xaxis("$n$",-2,6,Arrow);
yaxis("$a_n$",-2,6,Arrow);

draw(graph(f,-1,5,operator ..));

for(int i=0;i<5;++i){
  dot((i,f(i)),linewidth(1));
}

for(int i=0;i<6;++i){
  string s="$" +string(i) + "$";

  label(s,(i,-0.2),fontsize(4));
  draw((i,0)--(i,0.1),linewidth(0.2));
}
for(int i=-3;i<21;i=i+4){
  string s="$"+string(i)+"$";
  label(s,(-0.2,i/4),fontsize(4));
  dot((0,i/4),linewidth(1));
}
label("$a_n=4n-3$",(2,3),fontsize(4));