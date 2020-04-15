size(6cm,6cm);
import graph;
import geometry;
import fontsize;

xaxis("$x$",-3.2,2.4,Arrow);
yaxis("$y$",-1.2,2.4,Arrow);

draw(circle((-2,0),1));
draw(arc((-2,0),0.2,0,60));
draw((-2,0)--(-2+cos(pi/3),sin(pi/3)));
label("$O_1$",(-2,-0.2),fontsize(4));
label("$Q$",(-2+cos(pi/3),-0.2),fontsize(4));
label("$A$",(-0.9,-0.2),fontsize(4));
label("$\alpha$",(-1.7,0.1),fontsize(4));
label("$\sin{\alpha}$",(-1.2,0.5),fontsize(4));

pair N=(pi/3,0);
pair M=(pi/3,sin(pi/3));
draw(N--M);
dot(N);
dot(M);
dot((-1,0));
dot((-2,0));
pair p=(-2+cos(pi/3),sin(pi/3));
label("$P$",p+(0.1,0.1),fontsize(4));
dot(p);
dot((-2+cos(pi/3),0));
draw(p--M,dashed);
label("$N$",N+(0,-0.2),fontsize(4));
label("$M(\alpha,\sin{\alpha})$",M+(0.1,0.2),fontsize(4));
label("$\alpha$",N/2+(0,-0.2),fontsize(4));

