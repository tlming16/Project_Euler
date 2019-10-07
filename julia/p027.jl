include("prime.jl")
function count_consecutive_primes(a::Int,b::Int)
	index=0
	while true
		n=index^2+index*a+b 
		if !is_prime(n)
			return index
		end
		index+=1
	end
end


function compute()
	len=0;
	ans=0;
	for i=-999:1000
		for j=2:1000
			if( count_consecutive_primes(i,j)>len)
				len=count_consecutive_primes(i,j)
				ans=i*j 
			end
		end
	end
	return ans

end


println(compute())