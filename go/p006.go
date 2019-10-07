package main  

func compute() int{
	const N=100
	s:=0
	s2:=0

	for i:=1;i<N+1;i++{
		s+=i
		s2+=i*i

	}

	return s*s-s2;
}


func main(){

	println(compute())
}