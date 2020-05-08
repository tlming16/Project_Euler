size(6cm,6cm);
import fontsize;
import graph;

xaxis("$x$",-3.7,4.1,Arrow);
yaxis("$y$",-3.7,4,Arrow);

draw(graph(atan,-3.6,3.6,operator ..),blue);
draw(graph(tan,atan(-3.6),atan(3.6),operator..),red);

draw((-3.6,atan(-3.6)-0.1)--(3.6,atan(-3.6)-0.1),dotted);
draw((3.6,atan(3.6)+0.1)--(-3.6,atan(3.6)+0.1),dotted);

draw((-3,-3)--(3,3),dotted);
label("$\frac{\pi}{2}$",(-0.1,pi/2),fontsize(3));
label("$-\frac{\pi}{2}$",(-0.2,-pi/2),fontsize(3));

label("$y=\arctan(x)$",(2.1,0.6),fontsize(4)+blue);
label("$y=\tan(x)$",(0.6,2.1),fontsize(4)+red);

draw((atan(-3.6),-3.6)--(atan(-3.6),3.6),dotted);
draw((atan(3.6),-3.6)--(atan(3.6),3.6),dotted);