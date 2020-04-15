size(6cm,6cm);
import graph;
import fontsize;
import piformat;

xaxis("$x$",-2,5,Arrow);
yaxis("$y$",-3.4,1.8,Arrow);

real f(real x){
  return 2*sin(2*x-pi/4)-1;
  }

  draw(graph(f,-1,pi+1,operator ..));
  draw(graph(f,0,pi,operator ..),red);

  for(int i=-2;i<6;++i){
    label(piformat(i,4),(i*pi/4,-0.2),fontsize(4));
    dot((i*pi/4,0),linewidth(1));
  }
  label("$y=2\sin({2x-\frac{\pi}{4}})$",(pi,1.2),fontsize(4));
