
package main 
func compute() int {
	ans:=0
	x:=1
	y:=2
	for x<=4000000{
		if x%2==0{
			ans=ans+x
		}
		x,y=y,x+y
	}

	return ans
}

func main(){
	println(compute())
}