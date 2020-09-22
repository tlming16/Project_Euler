import std.array; 

int sum(int [] arr,int cs=0) {
  if (arr.empty) return cs;

  return sum(arr[1..$],cs+arr.front);
}
void main(){
  assert( sum([1,2,3,4],1)==11);
}