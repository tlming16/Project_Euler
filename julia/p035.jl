include("prime.jl")
function  is_circular_prime(n::Int)
	if (!is_prime(n)) 
		return false
	end
	s=string(n)
	for i=1:length(s)
		if (!is_prime( parse(Int,s[i:length(s)]*s[1:i-1])))
			return false
		end

	end

	return true

end

function  compute()
	const N=1000000
	ans =sum( 1 for i =1:N if is_circular_prime(i))
	return ans

end

println(compute())

