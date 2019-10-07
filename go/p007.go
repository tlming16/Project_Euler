
package main
func Is_prime(n int64) bool {
	if n<=1{
		return false
	}
    if n==2{
    	return true;
    }
    if n%2==0 {
    	return false
    }
		var i int64=3
		for ;i*i<=n;i+=2{
			if n%i==0{
				return false
			}
		}
		return true
	

}
func compute() int64{
	var index int64=1
	count:=0
	for{
		index+=1
		if Is_prime(index){
			count+=1
			if(count==10001){
				return index
			}
		}
	}
}


func main(){

	println(compute())
}