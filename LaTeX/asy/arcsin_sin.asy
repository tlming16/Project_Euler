size(6cm,6cm);
import fontsize;
import graph;

xaxis("$x$",-2,2,Arrow);
yaxis("$y$",-pi/2-0.2,2,Arrow);

draw(graph(sin,-pi/2-0.2,pi/2+0.2,operator ..),blue);

draw(graph(asin,-1.0,1.0,operator..),red);

label("$y=sin(x)$",(2,0.5),fontsize(4)+blue);
label("$y=arcsin(x)$",(0.5,1.3),fontsize(4)+red);

string p_pi = "$\frac{\pi}{2}$";
string m_pi = "$-\frac{\pi}{2}$";
label(p_pi,(pi/2,-0.1),fontsize(3));
label(m_pi,(-pi/2,0.1),fontsize(3));

label(p_pi,(-0.1,pi/2),fontsize(3));
label(m_pi,(0.1,-pi/2),fontsize(3));

draw((pi/2,0)--(pi/2,1),dotted);
draw((-pi/2,0)--(-pi/2,-1),dotted);

draw((-pi/2,-pi/2)--(pi/2,pi/2),dotted);
draw((1,pi/2)--(1,0),dotted);
draw((-1,0)--(-1,-pi/2),dotted);
draw((-1,-pi/2)--(0,-pi/2),dotted);
draw((1,pi/2)--(0,pi/2),dotted);
label("$1$",(1,-0.1),fontsize(3));
label("$-1$",(-1,0.1),fontsize(3));
label("$O$",(0.1,-0.1),fontsize(3));
