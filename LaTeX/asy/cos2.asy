size(10cm,10cm);
import graph; 

xaxis("$x$",-pi/2-0.5,pi*3/2+0.5,Arrow);
yaxis("$y$",-1.5,1.7,Arrow);

draw(graph(cos,-pi/2-0.2,3*pi/2+0.2,operator ..));
label("$y=\cos(x),x\in [-\frac{\pi}{2},\frac{3\pi}{2}]$",(2,1.2));
for(int i=-1;i<=3;++i){
  string s="$";
  if( i<0) s+="-";
  if (abs(i)==1) s+= "\frac{\pi}{2}$"; 
  else if (abs(i)==2) s+= "\pi$";
  else if (i==0) s+="0$";
  else s+=format("\frac{{%d}\pi}{2}$",i); 
  label(s,(pi*i/2,0),S);
  dot((pi*i/2,cos(pi*i/2)),red);

}