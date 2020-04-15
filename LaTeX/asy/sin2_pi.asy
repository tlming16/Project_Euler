size(6cm,4cm);
import graph;
import fontsize;
import piformat;

xaxis("$x$",-2,5,Arrow);
yaxis("$y$",-3.4,1.8,Arrow);

real f(real x){
  return 2*sin(2*x-pi/4)-1;
  }

  draw(graph(f,-1,pi+1,operator ..));
  draw(graph(f,0,pi,operator ..),red);

  for(int i=-4;i<12;++i){
    label(piformat(i,8),(i*pi/8,-0.2),fontsize(4));
    dot((i*pi/8,0),linewidth(1));
  }
  label("$y=2\sin({2x-\frac{\pi}{4}})-1$",(pi,1.2),fontsize(4));
draw((3pi/8,0)--(3pi/8,1),dashed);
draw((0,1)--(3pi/8,1),dashed);
draw((7pi/8,0)--(7pi/8,-3),dashed);
draw((0,-3)--(7pi/8,-3),dashed);

for(int i=-3;i<2;++i){
  label("$"+string(i)+"$",(-0.2,i),fontsize(4));
  dot((0,i),linewidth(1));
}