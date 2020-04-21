size(6cm,6cm);
import fontsize;
import graph;
import piformat;

xaxis("$x$",-2pi-4,2pi+4,Arrow);
yaxis("$y$",-6,6,Arrow);
real f(real x){
  return tan(abs(x));
}

//draw(graph(sin,-2pi-2,2pi+2,operator ..));
//draw(graph(sin,-2pi,2pi,operator ..),red);

for(int i=-3;i<2;++i){
  draw(graph(f,pi/2+0.2+i*pi,pi/2-0.2+(i+1)*pi,operator ..),blue);
}
for(int i=-4;i<5;++i){
  label(piformat(i,2),(i*pi/2,-0.3),fontsize(3));
  dot((i*pi/2,0),linewidth(1));
}