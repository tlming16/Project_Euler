size(6cm,6cm);
import graph;

real f(real x){
   return -(x-1/2)^2 +9/4;
} 

xaxis("$x$",-1.6,1.6,Arrow);
yaxis("$y$",-0.5,2.5,Arrow);
draw(graph(f,-1.2,1.5,operator ..));
draw(graph(f,-1,1,operator ..),red);
draw((1/2,-0.5)--(1/2,2.5),dashed);
//label("$f(x)=-(x-\frac{1}{2})^{2} +\frac{9}{4}$",(-0.6,1),red);
label("$0$",(0.1,-0.15));
label("$-1$",(-1,-0.15));
label("$1$",(1,-0.15));
label("$\frac{1}{2}$",(0.6,-0.15));
dot((0,0));
dot((1,0));
dot((-1,0));
dot((1/2,0));

