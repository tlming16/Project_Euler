size(6cm,6cm);
import fontsize;
import graph;

xaxis("$x$",-4,4,Arrow);
yaxis("$y$",-2,2.3,Arrow);

draw(graph(atan,-3.6,3.6,operator ..),blue);

draw((-3.6,atan(-3.6)-0.1)--(3.6,atan(-3.6)-0.1),dotted);
draw((3.6,atan(3.6)+0.1)--(-3.6,atan(3.6)+0.1),dotted);

label("$\frac{\pi}{2}$",(-0.1,pi/2),fontsize(3));
label("$-\frac{\pi}{2}$",(-0.2,-pi/2),fontsize(3));

label("$y=\arctan(x)$",(2,0.6),fontsize(4)+blue);