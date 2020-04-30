size(6cm,6cm);
import graph;
import fontsize;
import piformat;

real f(real x){
  return sin(x)+cos(x);
}
xaxis("$x$",-2pi,2pi+1,Arrow);
yaxis("$y$",-2.5,3,Arrow);

draw(graph(f,-pi-pi/2,pi+pi/2,operator ..));
draw(graph(f,0,pi,operator ..),red);

for(int i=-6;i<8;++i){
  label(piformat(i,4),(i*pi/4,-0.3),fontsize(4));
  dot((i*pi/4,0),linewidth(1));
}
label("$y=sin(x)+cos(x)$",(pi,2),fontsize(4));

draw((-6,-sqrt(2))--(6,-sqrt(2)),dotted);
draw((-6,sqrt(2))--(6,sqrt(2)),dotted);
draw((-6,1)--(6,1),dotted);

for(int i=-2;i<3;++i){
  string s="$"+string(i) +"$";
  label(s,(-0.3,i),fontsize(4));
  dot((0,i),linewidth(1));
}
label("$\sqrt{2}$",(-0.4,sqrt(2)),fontsize(3));
label("$-\sqrt{2}$",(-0.4,-sqrt(2)),fontsize(3));
