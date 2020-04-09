size(6cm,6cm);
import graph;

xaxis("$x$",-6.5,5,Arrow);
yaxis("$y$",-1.5,2.5,Arrow);
draw(graph(sin,-pi,pi,operator ..));
label("$O$",(0.2,-0.2),fontsize(6));
label("$M$",(pi/2,1.2),fontsize(6));
label("$C$",(-pi,0.2),fontsize(6));
label("$-\pi$",(-pi-0.1,-0.2),fontsize(6));
label("$\pi$",(pi+0.1,-0.2),fontsize(6));
label("$D$",(pi+0.1,0.2),fontsize(6));

draw(circle((-5,0),1));
label("$O_1$",(-5,-0.2),fontsize(0.3));
label("$A$",(-3.8,-0.2),fontsize(6));
label("$Q$",(-4.5,-0.2),fontsize(6));
draw((-4.5,0)--(-4.5,sin(pi/3)));
draw((-5,0)--(-4.5,sin(pi/3)));
label("$P$",(-4.4,sin(pi/3)+0.2),fontsize(6));

