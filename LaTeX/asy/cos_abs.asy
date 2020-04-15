size(6cm,6cm);
import graph;
import fontsize;
import piformat;

real f(real x){
  return abs(cos(x));
}

xaxis("$x$",-2pi,2pi+1,fontsize(4),Arrow);
yaxis("$y$",-0.5,3,fontsize(4),Arrow);
draw(graph(f,-2pi,2pi,operator..),blue);
for(int i=-4;i<5;++i){
  label(piformat(i,2),(i*pi/2+0.1,-0.3),fontsize(4));
}
label("$y=|cos(x)|$",(1.2,1.5),fontsize(4));