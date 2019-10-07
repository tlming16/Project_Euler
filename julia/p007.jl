include("prime.jl")

function compute()
	index=1
	count=0
	while true
		index+=1
		if is_prime(index)
			count+=1
			if( count==10001)
				return index
			end
		end
	end
end


println(compute())