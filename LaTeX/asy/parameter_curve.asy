size(6cm,6cm);
import fontsize;
usepackage("amsmath");
import graph;
pair f(real t){
 return (sin(2t),cos(3t));
}

draw(graph(f,0,10,operator ..),blue);

xaxis("$x$",-1.3,2,Arrow);
yaxis("$y$",-1.2,1.5,Arrow);

label("$\begin{cases} x=sin(2t)\\ y=cos(3t) \end{cases}$",(1.5,1.2),fontsize(4));
