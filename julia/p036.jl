function binary(n::Int)
	ans=Int[]
	while n>=1
		
		push!(ans,n%2)
		n=floor(Int,n/2)

	end

	return reverse(ans)
end

function is_decimal_binary_palindrome(n::Int)
	s=string(n)
	if s!=reverse(s)
		return false
	end

	bin=binary(n)
	
	return bin==reverse(bin)
end


function compute()

	ans= sum(i for i=1:1000000 if is_decimal_binary_palindrome(i))

	return ans
end



println(compute())

