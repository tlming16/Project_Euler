


package main 
import "fmt"
func compute() int {
	const N=1000
	var ans int =0

	for i:=1;i<N;i++{
		if (i%3==0)||(i%5==0){
			ans=ans+i;
		}
	}
	return ans;
}

func main(){

	fmt.Println(compute())
}