size(10cm,10cm); 
import math;
import graph;
real f(real x){
  if(x==0) return 0;
  return 1./(sin(x)); 
}


draw(graph(f,-2.8,-0.3,operator ..));
draw(graph(f,0.3,2.8,operator ..));
draw((-3.5,0)--(3.5,0),Arrow);
draw((-3.5,-1)--(3.5,-1),dashed);
draw((-3.5,1)--(3.5,1),dashed);
label("$x$",(3.2,-0.15));
draw((0,-4)--(0,4),Arrow);
label("$y$",(-0.1,3.6));
label("-1",(-0.2,-1));
label("1",(0.2,1));
for( int i=-2;i<3;++i){
  string s;
      if(i%2!=0){
       s =(i>0?"":"-")+"$\frac{"  +"\pi}{2}$";
      } else if(i!=0) {
         s=(i>0? "":"-") +"$\pi$";
      } else {
        s=string(0);
      }
      label(s,(i*pi/2,-0.3));
}
dot((pi/2,1),red);
dot((-pi/2,-1),red);
label("$y=\frac{1}{sin(x)},x\in (-\pi,\pi)\backslash\{0\}$",(-pi/2,2),red);
