size(6cm,6cm);
import fontsize;
import graph;

xaxis("$x$",-1.2,4,Arrow);
yaxis("$y$",-1.3,4,Arrow);

draw(graph(acos,-1,1,operator..),blue);
draw(graph(cos,0,pi,operator ..),red);
label("$O$",(-0.1,-0.1),fontsize(3));
label("$-1$",(-1,-0.1),fontsize(3));
label("$1$",(1,-0.1),fontsize(3));
label("$1$",(-0.1,1),fontsize(3));
label("$\pi$",(0.1,pi),fontsize(3));
draw((-1,0)--(-1,pi),dotted);
draw((-1,pi)--(0,pi),dotted);
label("$y=\arccos(x)$",(1.3,1),fontsize(4)+blue);
label("$y=\cos(x)$",(1.5,-0.6),fontsize(4)+red);

label("$\frac{\pi}{2}$",(pi/2,-0.1),fontsize(3));
label("$\pi$",(pi,+0.1),fontsize(3));
label("$-1$",(-0.1,-1),fontsize(3));
draw((pi,0)--(pi,-1),dotted);
draw((0,-1)--(pi,-1),dotted);