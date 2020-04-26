size(6cm,6cm);
import fontsize;
import graph;
import piformat;

xaxis("$x$",-2,2pi+1,Arrow);
yaxis("$y$",-4.5,4,Arrow);
real f(real x){
  return 3*tan(3*x/2-pi/4);
}

for(int i=0;i<3;++i){
  draw(graph(f,-pi/6+0.35+2/3*i*pi,pi/2-0.35+2/3*i*pi,operator ..));
}

for(int i=-1;i<10;++i){
  label(piformat(i,6),(i*pi/6,-0.3),fontsize(3));
  dot((i*pi/6,0),linewidth(1));
}
for(int i=-4;i<4;++i){
  string s="$"+string(i) +"$";
  label(s,(-0.3,i),fontsize(4));
  dot((0,i),linewidth(1));
}

dot((pi/6,f(pi/6)),linewidth(1)+red);
dot((5pi/6,f(5pi/6)),linewidth(1)+red);
dot((0,-3),linewidth(1)+red);

label("$y=3\tan(\frac{3x}{2}-\frac{\pi}{4})$",(pi,1),red+fontsize(4));