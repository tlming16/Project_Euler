package main  

func  compute() int{
	const N=1000;
	for i:=1;i<N;i++{
		for j:=i+1;j<N;j++{
			c:=N-i-j;
			if i*i+j*j==c*c {
				return i*j*c
			}
		}
	}

	return -1
}


func main(){

	println(compute())
}