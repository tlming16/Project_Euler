size(6cm,6cm);
import graph;
import fontsize;
import piformat;
xaxis("$x$",-1,2pi,Arrow);
yaxis("$y$",-1.3,1.5,Arrow);
draw(graph(sin,-0.5,pi+1,operator ..));
draw(graph(sin,0,pi,operator ..),red);

draw(graph(cos,-0.5,pi+1,operator..));
draw(graph(cos,0,pi,operator ..),blue);

for(int i=0;i<3;++i){
  label(piformat(i,2),(i*pi/2,-0.2),fontsize(4));
}
label("$y=sin(x)$",(pi,1),red+fontsize(4));
label("$y=cos(x)$",(pi/2,-1),blue+fontsize(4));