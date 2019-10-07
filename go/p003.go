package main 

import "math"

func smallest_prime_factor( n int) int {

	var k int =int(math.Sqrt(float64(n)))

	for i:=2;i<=k+1;i++{
		if (n%i==0) {
			return i;
		}
	}

	return n;
}

func compute() int{
	n:=600851475143
	for {
		p:=smallest_prime_factor(n)
		if p<n {
			n/=p;
		}else{
			return n;
		}
	}

}


func main(){
	println(compute())
}