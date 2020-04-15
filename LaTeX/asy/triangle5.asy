size(6cm,6cm);
import graph;
import fontsize;
int gcd(int m,int n) {
  if(n>m) return gcd(n,m);
  if (n==0||n==m) return m;
  return gcd(n,m%n);
}

string piformat(int m,int n){
  string res="$";
  if(m*n<0) res+="-";
  if(m==0||n==0) res+="0";
  else {
  m=abs(m);
  n=abs(n);
  int d=gcd(m,n);
  m=m#d;
  n=n#d;
  if(m==1 && n!=1) res+="\frac{\pi}"+"{"+string(n)+"}";
  else if (n==1 && m==1) res+="\pi";
  else if( n==1 && m!=1) res+= string(m)+"\pi";
  else 
    res+="\frac{"+string(m) +"\pi"+"}" +"{"+string(n)+"}";
  }
  res+="$";
  return res;
}

xaxis("$x$",-4,7.2,fontsize(6),Arrow);
yaxis("$y$",-1.5,2.5,fontsize(6),Arrow);
label("$y=\sin(x),x\in [0,2\pi]$",(3,1.3),fontsize(4));
draw(graph(sin,0,2pi,operator ..));
for(int i=1;i<5;++i){
  label(piformat(i,2),(i*pi/2,i<=6?-0.25:0.25),fontsize(4));
  dot((i*pi/2,0),linewidth(1.5));
}
draw(circle((-2,0),1));
int j=0;
for(int i=0;i<12;++i){
  pair z=(-2+cos(i*pi/6),sin(i*pi/6));
  pair z2=(i*pi/6,sin(i*pi/6));
  pair z3=(i*pi/6,0);
  dot(z,linewidth(1.5));
  dot(z2,linewidth(1.5));
  draw((-2,0)--z,linewidth(0.5));
  draw(z--z2,dotted);
  draw(z--(z.x,0),dotted);
  if(i%3==2){
      j=j+1;
      string s="$p_{" +string(j) +"}$";
      string m="$M_{" +string(j) +"}$";
      label(s,z+(-0.1,i<=6?0.2:-0.2),fontsize(4));
      label(m,(z.x,-0.1),fontsize(2));
      string st="$p^{\prime}_{" +string(j) +"}$";
      label(s,z2+(+0.1,i<=6?0.2:-0.2),fontsize(4));
      label(m,(z2.x,-0.1),fontsize(2));
  }
  draw(z3--z2,dotted);
}
label("$O$",(-0.2,-0.2),fontsize(4));
label("$O$",(-2,-0.3),fontsize(4));


