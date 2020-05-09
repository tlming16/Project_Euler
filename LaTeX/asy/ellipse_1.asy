size(6cm,6cm);
import fontsize;
import graph;
xaxis("$x$",-2.4,3.3,linewidth(0.35),Arrow);
yaxis("$y$",-1.6,2.3,linewidth(0.35),Arrow);

real a =1.75;
real b =1.25;
/* x^2/a^2 +y^2/b^2=1*/
draw(ellipse((0,0),1.75,1.25),linewidth(0.5));

real xe=0.9;
real ye= b*sqrt(1- xe^2/a^2);
pair p=(xe, ye);
pair q=(-xe,-ye);
pair e=(xe,0);
pair el= e+(-0.05,0);
pair eu= e+(0,0.05);
pair ea= e+(-0.05,0.05);
draw(el--ea,linewidth(0.35));
draw(ea--eu,linewidth(0.35));
draw(p--q,linewidth(0.3));
draw(p--e,linewidth(0.3));
label("$P$",p,N,fontsize(3));
label("$Q$",q,S,fontsize(3));
label("$E$",e,S,fontsize(3));

pair m =interp(q,e,1.41);
label("$G$",m,E,fontsize(3));
draw(q--m,linewidth(0.3));
draw(p--m,linewidth(0.3));
