size(6cm,6cm);
import graph;
import fontsize;
import piformat;
xaxis("$x$",-1,3pi,Arrow);
yaxis("$y$",-2,5,Arrow);
draw(graph(cos,-0.5,3pi,operator ..),red);
draw(graph(log,0.1,3pi,operator ..),blue);

for(int i=0;i<3;++i){
  label(piformat(i,2),(i*pi/2,-0.2),fontsize(4));
}
label("$y=log(x)$",(pi,2.5),blue+fontsize(4));
label("$y=cos(x)$",(pi,-1.5),red+fontsize(4));