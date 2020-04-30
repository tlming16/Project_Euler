size(6cm,6cm);
import fontsize;
import graph;

// draw angle to form \angle{ABC}
void angle(pair A,pair B,pair C,string mark="$\theta$"){
     picture p=currentpicture;
     pair BA=(A-B);
     pair BC=(C-B);
     real len= abs(BA)+abs(BC);
     real s,t;
     if (BC.x==0) s=90;
     else s=atan(BC.y/BC.x)*180/pi;
     if (BA.x==0) t=90;
     else t=atan(BA.y/BA.x)*180/pi;
     if (s<0) s=s+180;
     if (t<0) t=t+180;
     if (s>t) draw(p,Arc(B,len*0.05,t,s));
     else  draw(p,Arc(B,len*0.05,s,t));
     pair z=B +len*0.08*expi((s+t)/2*pi/180);
     label(p,mark,z,fontsize(4));

}

pair A=(2,3);
pair B=(3,2);
pair C=(4,3);
draw(A--B--C);
dot(A);
dot(B);
dot(C);
angle(A,B,C);
xaxis("$x$",-3,3,Arrow);
yaxis("$y$",-3,3,Arrow);
angle((0,1),(0,0),(1,0));

