include("prime.jl")

const N=10000000
primes=prime_table(N);

function is_truncatable_prime(n::Int)
	nn=n

	while n>=1
		if ! primes[n]
			return false
		end
		n=floor(Int,n/=10)
	end

	i=10
	while i<nn
		if !primes[nn%i]
			return false
		end

		i*=10
	end

	
	return true 
end


function compute()
    ans=0
	index=11
	cnt=0
	while true
		if is_truncatable_prime(index)
			ans+=index
			cnt+=1
		end
		if cnt==11
			return ans
		end
		index+=1
	end


end

println(compute())
