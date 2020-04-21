size(6cm,6cm);
import fontsize;
import graph;
import piformat;

real f(real x){
  return abs(sin(x));
}


xaxis("$x$",-5,2pi,Arrow);
yaxis("$y$",-1,1.5,Arrow);

draw(graph(f,-pi-2,pi+2,operator ..));
for(int i=-3;i<4;++i){
  label(piformat(i,2),(i*pi/2,-0.2),fontsize(3));
  dot((i*pi/2,0),linewidth(1));
}

label("$y=|sin(x)|$",(2,-0.5),fontsize(4));