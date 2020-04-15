
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