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

xaxis("$x$",-4pi-1,4pi+2,fontsize(6),Arrow);
yaxis("$y$",-2,4,fontsize(6),Arrow);

draw(graph(sin,-4pi,4pi,operator ..),fontsize(4));
label("$y=\sin(x) \quad x \in R$",(0,1.5),fontsize(4));
for(int i=-8;i<=8;++i){
  dot((i*pi/2,0),linewidth(1));
  label(piformat(i,2),(i*pi/2-0.1,i%2==0?0.55:-0.55),fontsize(3));
}

