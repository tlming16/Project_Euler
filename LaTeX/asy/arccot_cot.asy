size(6cm,6cm);
import fontsize;
import graph;

real acot(real x){
  return pi/2-atan(x);
}
real cot(real x){
  return tan(pi/2-x);
}
xaxis("$x$",-3.7,4.1,Arrow);
yaxis("$y$",-3.7,4,Arrow);

draw(graph(acot,-3.6,3.6,operator ..),blue);
draw(graph(cot,acot(-3.6),acot(3.6),operator..),red);

//draw((-3.6,acot(-3.6)-0.1)--(3.6,acot(-3.6)-0.1),dotted);
draw((3.6,pi)--(-3.6,pi),dotted);

draw((-3,-3)--(3,3),dotted);
label("$\frac{\pi}{2}$",(-0.1,pi/2),fontsize(3));
label("$-\frac{\pi}{2}$",(-0.2,-pi/2),fontsize(3));

label("$y=arccot(x)$",(2.1,0.6),fontsize(4)+blue);
label("$y=\cot(x)$",(0.6,2.1),fontsize(4)+red);

draw((pi,-3.6)--(pi,3.6),dotted);

label("$\frac{\pi}{2}$",(pi/2,-0.1),fontsize(3));