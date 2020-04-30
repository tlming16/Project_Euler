size(6cm,6cm);
import graph;
import fontsize;
import piformat;
xaxis("$x$",-1,14,Arrow);
yaxis("$y$",-2,5,Arrow);
draw(graph(cos,-0.5,3pi+2,operator ..),red);
draw(graph(log10,0.1,3pi+3,operator ..),blue);

for(int i=0;i<7;++i){
  label(piformat(i,2),(i*pi/2,-0.2),fontsize(4));
}
label("$y=log(x)$",(pi,2.5),blue+fontsize(4));
label("$y=cos(x)$",(pi,-1.5),red+fontsize(4));
draw((0,1)--(11,1),dotted);
label("$1$",(-0.2,1),fontsize(4));