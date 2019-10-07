

function smallest_prime_factor(n::Int64)

	i=2;
	while i*i<=n
		if( n%i==0)
		 return i
		end
		i=i+1
	end
	return n
end

function compute()
	n=600851475143
	while true
		p=smallest_prime_factor(n)
		if p<n
			n/=p
			n=Int64(n)
		else return n
		end
	end
end

print(compute())
