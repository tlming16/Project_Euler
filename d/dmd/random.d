
import std.stdio;
import std.random;
import std.algorithm;
void main(){

  int [] numbers;
  foreach( i;0..10){
    numbers~= uniform(0,10)-5;
  }
  writeln("input:",numbers);
  writeln("out:",filterAndConverter(numbers));
  writeln(numbers.filter!(num=>num>2));
}

int [] filterAndConverter( const int [] numbers) {
  int [] res;
  foreach(e;numbers){
    immutable newnumber = e*10;
    res~= newnumber;
  }
  return res;
}
alias predict = bool function(int) ;
alias convertor = int function(int); 

bool isGreaterThanZero(int num){
  return num>0;
}
int tenTimes(int num){
  return num*10;
}
bool isEven( int num){
  return (num%2)==0;
}
int negative(int num){
  return -num;
}

class NumberHandler{
  predict p;
  convertor c;

  this( predict pp,convertor cc){
    this.p=pp;
    this.c=cc;
  }

  int [] handle(const int [] num){
    int [] res;
    foreach( e;num) {
      if (p(e)) {
        res~=c(e);
      }
    }
    return res;
  }
}

auto f =(int a)=> a+1;
auto f2=(int a)=>a*a;
