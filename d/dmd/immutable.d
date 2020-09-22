// Evaluating arguments before calling a function is called eager evaluation.

import std.stdio;

void main(){
  immutable int [] slice =[1,23,4,5];
  test_immu(slice);
  print( slice);
  int [] s =[2,4,6];
  print(s);
  half(s);
  print(s);
  immutable (int) [] ims=[1,2];
  ims ~=3;
  ims.length=100;
  // ims[0]=10 //err 
  immutable int [] imt =[2,3,4];
  ims=imt;
  //imt[0]=1 ;//imt~=10 ;//error
}
// need to add const 
// immutable type can't be passed to function 
void print(const int [] slice){
  foreach( i,e;slice){
    writefln("slice[%d]=%d",i,e);
  }
}

void half(int [] slice) {
  foreach(i, ref x;slice){
    x/=2;
  }
}

void test_immu(immutable int [] slice){

}
// this will fail when compile 
void foo( const int [] slice){
  //test_immu(slice);
  test_immu(slice.idup);
} 
void test2(){
immutable int[] a = [1]; /* Neither the elements nor the
* slice can be modified */
immutable(int[]) b = [1]; /* The same meaning as above */
immutable(int)[] c = [1]; /* The elements cannot be
* modified but the slice can be */
}