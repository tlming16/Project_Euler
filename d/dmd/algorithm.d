import std.exception; 
import std.stdio;
import std.random;

void main(){
  int last=0;
  writeln(binaryAlgorithm((a,b)=>10*a+b,[1,2,3],[4,5,6]));
  writeln(delimitedNumber(10,()=>last+=uniform(0,2)));
}
int [] binaryAlgorithm( int function(int,int) func,
                        const int[] slice1,
                        const int[] slice2){
  enforce(slice1.length==slice2.length);
  int [] res;
  foreach(i;0..slice1.length){
    res~= func( slice1[i],slice2[i]);
  }
  return res;
}


alias calc = int function(int);
alias calcd = int delegate(int);

// lambda function can't capture the local variable;
// use delegate instead;
calcd make_test(){
  int x=10;
  return value=>x +value;
}
calcd make_delegate(){
  int x=10;
  return value=>x+value;
}

int [] delimitedNumber( int count,int delegate() gen){
  int [] res=[-1];
  res.reserve(count+2);
  foreach(i;0..count){
    res~=gen();
  }
  res~=-1;
  return res;
}
