package main 
func compute() int {
	ans:=1
	for i:=1;i<21;i++{
		ans*=i/gcd(i,ans)
	}
	return ans
}

func gcd(a,b int) int {
	if b==0 {
		return a;
	}else{
		return gcd(b,a%b)
	}
}


func main(){

	println(compute())
}