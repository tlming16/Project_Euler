
package main 

func prime_table( n int64) []bool{

	res:=make([]bool,n+1);
	for i:=range res{
		res[i]=true
	}
	res[0]=false
	res[1]=false

	var i int64
	var j int64

	for i=2;i<n+1;i++{
		for j=i*i;j<n+1;j+=i{
			if res[i]{
				res[j]=false
			}
		}
	}

	return res
}

func compute() int64{
	const N=1999999
	primes:=prime_table(N);
	var ans int64=0
	for k,v:=range primes{
		if(v){
			ans+=int64(k)
		}
	}
	return ans
}

func main(){

	println(compute())
}