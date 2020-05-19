
size(6cm,6cm);
import graph;
import fontsize;

real f (real x){
  return 4-x^2;
}


xaxis("$x$",-2.1,2.5,Arrow);
yaxis("$y$",-1,4.5,Arrow);

draw(graph(f,-2.2,2.2,operator ..),blue);

label("$-2$",(-2,-0.12),fontsize(3));
label("$2$",(2,-0.12),fontsize(3));
label("$y=4-x^2$",(1,4),fontsize(4));


