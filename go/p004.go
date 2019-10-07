package main 

func compute() int{
	ans:=0
	for i:=100;i<1000;i++{
		for j:=0;j<=1000;j++{
			if equal(i,j){
				ans=max(ans,i*j)
			}
		}
	}
	return ans

}

func equal(i,j int) bool {
	a:=i*j 
	b:=make([]int,0)
	for a>=1{
		b=append(b,a%10);
		a/=10;
	}

	for i:=0;i<len(b)/2;i++{
		if b[i]!=b[len(b)-1-i]{
			return false
		}
	}

	return true;

}

func max( a,b int) int{

	if a>b{
		return a
	}else{
		return b
	}
}

func main(){

	println(compute())
}