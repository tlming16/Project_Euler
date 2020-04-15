size(6cm,3cm);
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
  for(int i=-6;i<13;++i){
    label(piformat(i,6),(i*pi/6,-0.4),fontsize(3));
    dot((i*pi/6,0),linewidth(1));
  }
  label("$y=sin(x)+\sqrt{3}cos(x)$",(pi,2.5),fontsize(4));
  draw((-pi,-2)--(2pi+0.5,-2),dashed);
  draw((-pi,2)--(2pi+0.5,2),dashed);
  draw((pi/6,0)--(pi/6,2),dashed);
  draw((7pi/6,0)--(7pi/6,-2),dashed);
  draw((2pi,0)--(2pi,f(2pi)),dashed);
  draw((-0.1,f(0))--(2pi+0.1,f(2pi)),dashed);
  for(int i=-2;i<3;++i){
    label("$"+string(i)+"$",(-0.3,i),fontsize(3));
    dot((0,i),linewidth(1));
  }


  
