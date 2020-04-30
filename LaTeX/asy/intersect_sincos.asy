size(6cm,6cm);
import graph;
import fontsize;
import piformat;
xaxis("$x$",-1,2pi+1,Arrow);
yaxis("$y$",-1.3,1.5,Arrow);
draw(graph(sin,-0.5,2pi,operator ..));
draw(graph(sin,0,pi,operator ..),red);

draw(graph(cos,-0.5,2pi,operator..));
draw(graph(cos,0,pi,operator ..),blue);

for(int i=0;i<9;++i){
  label(piformat(i,4),(i*pi/4,-0.2),fontsize(4));
}
label("$y=sin(x)$",(pi,1),red+fontsize(4));
label("$y=cos(x)$",(pi/2,-1),blue+fontsize(4));

draw((pi/4,sin(pi/4))--(pi/4,0),dotted);
draw((5pi/4,sin(5pi/4))--(5pi/4,0),dotted);