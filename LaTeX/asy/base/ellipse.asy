size(6cm,6cm);
import graph;
real a=2;
real b=1;
path e=ellipse((0,0),a,b);
xaxis("$x$",-2.5,2.5,linewidth(0.4),Arrow);
yaxis("$y$",-1.2,1.6,linewidth(0.4),Arrow);

pair m=(-1,-1);
pair d=(2,2);
draw(e);
real [] ints =intersections(e,m,d,-1);
/*
for(int i=0;i<ints.length;++i){
  dot(point(e,ints[i]));
}
*/
pair p= point(e,ints[0]);
pair q=point(e,ints[1]);
draw(p--q);
draw(p--(p.x,0));

real [] intsqg = intersections(e,q,(p.x,0),-1);
pair g= point(e,intsqg[0]);
draw(q--g);
draw(p--g);
label("$P$",p,N,fontsize(3));
label("$Q$",q,S,fontsize(3));
label("$G$",g,E,fontsize(3));
label("$E$",p.x,S,fontsize(3));
