size(6cm,6cm);
import graph;
import math;
import geometry;
int gcd(int m,int n) {
  if(n>m) return gcd(n,m);
  if (n==0||n==m) return m;
  return gcd(n,m%n);
}
real f(real x){
  return cos(pi*x/3);
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

xaxis("$x$",-1,8,Arrow);
yaxis("$y$",-1.5,2.3,Arrow);
draw(graph(f,-1,7,operator ..),blue);

for(int i=-1;i<8;++i){
  dot((i,f(i)));
  /*
  string s="$";
  if (i<0) s+="-";
  if (i!=0 &&abs(i)==3) s+="\pi";
  else if (i==0)  s+="0";
  else s+= "\frac{" +string(abs(i)) +"\pi" +"}" +"{" +string(3)+"}";
  s+="$";
  label(s,(i,-0.3));
  */

  label(piformat(i,3),(i,-0.2),fontsize(6));

}