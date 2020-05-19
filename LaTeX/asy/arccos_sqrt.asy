
size(6cm,6cm);
import graph;
import fontsize;

real f (real x){
  return 1.0/2*acos(1./sqrt(4-x*x));
}


xaxis("$x$",-2,2.1,Arrow);
yaxis("$y$",-0.2,1.2,Arrow);

draw(graph(f,-sqrt(3),sqrt(3),operator ..),blue);

label("$-\sqrt{3}$",(-sqrt(3),-0.12),fontsize(3));
label("$\sqrt{3}$",(sqrt(3),-0.12),fontsize(3));
label("$y=\frac{1}{2}\arccos{\frac{1}{\sqrt{4-x^2}}}$",(0,0.7),fontsize(4));


