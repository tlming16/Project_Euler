size(6cm,4cm);
import fontsize;
import graph;

draw((-0.6,0)--(4.2,0),linewidth(1));
draw((4,0)--(4,3),linewidth(0.6));
draw((-0.5,0)--(4,3),dotted);
draw((2,0)--(4,3),dotted);

draw((1,0)--(4,2));
draw((1,0)--(4,3));

label("$M$",(1,-0.1),fontsize(4));
label("$D$",(2,-0.1),fontsize(4));
label("$C$",(-0.5,-0.1),fontsize(4));
label("$A$",(4.1,3),fontsize(4));
label("$B$",(4.1,2),fontsize(4));
label("$E$",(4.1,-0.1),fontsize(4));
label("$\theta$",(1.3,0.25),fontsize(3));
draw(Arc((1,0),0.3,30,45));
