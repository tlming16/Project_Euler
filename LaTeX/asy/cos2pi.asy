size(6cm,4cm);
import graph;
import fontsize;
import piformat;

xaxis("$x$",-2,8,Arrow);
yaxis("$y$",-3.4,4,Arrow);

real f(real x){
  return cos(x);
  }

  draw(graph(f,-1,2pi+1,operator ..));
  draw(graph(f,0,2pi,operator ..),red);

  for(int i=-1;i<5;++i){
    label(piformat(i,2),(i*pi/2,-0.2),fontsize(4));
    dot((i*pi/2,0),linewidth(1));
  }
  label("$y=cos(x)$",(pi,1.2),fontsize(4));

for(int i=-2;i<3;++i){
  label("$"+string(i)+"$",(-0.2,i),fontsize(4));
  dot((0,i),linewidth(1));
}