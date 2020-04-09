size(10cm,10cm);
import graph;
import plain;
real f(real x) {
  return -cos(x);
}
real g(real x){
  return cos(x);
}


draw(graph(f,-pi-0.2,pi+0.2,operator ..));
draw(graph(g,-pi-0.2,pi+0.2,operator ..));
draw((0,-1.5)--(0,1.5),Arrow);
draw((-pi-0.5,0)--(pi+1,0),Arrow);
draw((-pi-0.5,1)--(pi+0.5,1),dotted);
draw((-pi-0.5,-1)--(pi+0.5,-1),dotted);
for(int i=-2;i<=2;++i){
     string s;
      if(i%2!=0){
       s ="$\frac{" + string(i) +"\pi}{2}$";
      } else {
         s=string(i/2)+"$\pi$";
      }
      real x= i/2*pi;
      pair gz=(x,g(x));
      pair fz =(x,f(x));
      dot(gz,red);
      dot(fz,green);

  label(s,(pi*i/2,-0.3));
}
dot((0,g(0)),red);
dot((0,f(0)),green);

label("$-cos(x)$",(0,-1.3),green);
label("$cos(x)$",(0.5,1.2),red);
label("$x$",(pi+0.4,-0.1));
label("$y$",(-0.2,1.2));