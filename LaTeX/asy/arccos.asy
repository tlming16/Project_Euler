size(6cm,6cm);
import fontsize;
import graph;

xaxis("$x$",-1.5,2.5,Arrow);
yaxis("$y$",-0.5,3.5,Arrow);

draw(graph(acos,-1,1,operator..),blue);

label("$O$",(-0.1,-0.1),fontsize(3));
label("$-1$",(-1,-0.1),fontsize(3));
label("$1$",(1,-0.1),fontsize(3));
label("$1$",(-0.1,1),fontsize(3));
label("$\pi$",(0.1,pi),fontsize(3));
draw((-1,0)--(-1,pi),dotted);
draw((-1,pi)--(0,pi),dotted);
label("$y=\arccos(x)$",(1.3,1),fontsize(4)+blue);