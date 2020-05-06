size(6cm,6cm);
import fontsize;
import graph;
import piformat;

xaxis("$x$",-2,2pi,Arrow);
yaxis("$y$",-4,4,Arrow);
real f(real x){
  return tan(x);
}

//draw(graph(sin,-2pi-2,2pi+2,operator ..));
//draw(graph(sin,-2pi,2pi,operator ..),red);


for(int i=-1;i<1;++i){
  draw(graph(f,pi/2+0.3+i*pi,pi/2-0.3+(i+1)*pi,operator ..),blue);
}
for(int i=-1;i<4;++i){
  label(piformat(i,2),(i*pi/2,-0.3),fontsize(3));
  dot((i*pi/2,0),linewidth(1));
}

label("$y=tan(x)$",(2.5,2),fontsize(4));

draw((pi/2,-3)--(pi/2,-0.5),dotted);
draw((pi/2,0)--(pi/2,3),dotted);
draw((-pi/2,-3)--(-pi/2,-0.5),dotted);
draw((-pi/2,0)--(-pi/2,3),dotted);
draw((3pi/2,-3)--(3pi/2,-0.5),dotted);
draw((3pi/2,0)--(3pi/2,3),dotted);