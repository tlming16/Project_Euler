size(6cm,6cm);
import graph;

real f(real x){
   return (x+1/2)^2 +3/4;
} 

xaxis("$x$",-3,2,Arrow);
yaxis("$y$",-0.5,3.4,Arrow);
draw(graph(f,-2,1.1,operator ..));
draw(graph(f,-1,1,operator ..),red);
draw((-1/2,-0.5)--(-1/2,3),dashed);
//label("$f(x)=(x+\frac{1}{2})^{2} +\frac{3}{4}$",(1,2),red);
label("$0$",(0.1,-0.15));
label("$-1$",(-1,-0.15));
label("$1$",(1,-0.15));
label("$-\frac{1}{2}$",(-1/2,-0.15));
dot((0,0));
dot((1,0));
dot((-1,0));
dot((-1/2,0));

