size(6cm,6cm);
import graph;
import fontsize;
import piformat;

xaxis("$x$",-pi-1,3pi,Arrow);
yaxis("$y$",-3,3,Arrow);

real f(real x){
  return sin(x)+sqrt(3)*cos(x);
  }

  draw(graph(f,-pi,2pi+1,operator ..));
  draw(graph(f,0,2pi,operator ..),red);
  for(int i=-4;i<9;++i){
    label(piformat(i,4),(i*pi/4,-0.4),fontsize(4));
    dot((i*pi/4,0),linewidth(1));
  }
  label("$y=sin(x)+\sqrt{3}cos(x)$",(pi,2.5),fontsize(4));
  draw((-pi,-2)--(2pi+0.5,-2),dashed);
  draw((-pi,2)--(2pi+0.5,2),dashed);
  
