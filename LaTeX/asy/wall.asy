size(6cm,6cm);
import fontsize;
import geometry;
import graph;
pair left=(0,0);
pair right= (4,0);
pair c=(0,1);
pair b=(4,2);
pair a=(4,4);

draw((-0.6,0)--(5,0),linewidth(1));
draw((-0.4,1)--(0,1));
draw(c--b);
draw(b--a);
draw(c--a);

draw(left--c);
draw((0,0.2)--(4,0.2),Arrows);
draw((4.2,0)--(4.2,2),Arrows);
draw((4.5,0)--(4.5,4),Arrows);
draw((-0.2,0)--(-0.2,1),Arrows);
draw((4,2)--(4,4),linewidth(1));
label("$x$",(2,0.35));
label("$a$",(-0.3,0.6),fontsize(5));
label("$2$",(4.3,1.1),fontsize(5));
label("$4$",(4.65,2.2),fontsize(5));
label("$A$",(4,4.1),fontsize(5));
label("$B$",(4.2,2.15),fontsize(5));
label("$C$",(-0.15,1.1),fontsize(5));
draw((4,4)--(4.7,4));
draw((4,2)--(4.4,2));
draw((4,0)--(4,4));
draw((0,1)--(4,1),dotted);
label("$D$",(4.1,1.1),fontsize(4));
for(real x=-0.2;x<5;x+=0.4){
  draw((x-0.2,-0.3)--(x,0));
}

real start= atan(1/4);
real end =atan(3/4);

real degree=180/pi;
draw(Arc((0,1),0.4,start*degree,end*degree));
label("$\theta$",(0.5,1.25),fontsize(5));




