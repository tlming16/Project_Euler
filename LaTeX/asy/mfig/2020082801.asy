size(4cm,4cm);
import graph;
real f(real x){
   real g=0.98;
   return 0.5*g*x*x;
} 

xaxis("$t$",-0.2,3,Arrow);
yaxis("$s$",-0.2,3.2,Arrow);
draw(graph(f,0,2.5,operator ..));
label("$0$",(-0.1,-0.15));
label("$1$",(1.01,-0.3));
draw((1,0)--(1,f(1)),dashed);
draw((1,f(1))--(0,f(1)),dashed);
label("$\frac{g}{2}$",(-0.1,f(1)));
real T=2;
draw((T,0)--(T,f(T)),dashed);
label("$T$",(T,-0.3));
dot((0,0));
dot((1,0));
dot((T,0));
dot((T,f(T)));
dot((1,f(1)));


