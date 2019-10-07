function compute()
	"""
	seen=Set{BigInt}()
	for a=2:100
		for b=2:100
			d=BigInt(a);
			push!(seen,d^b)
		end
	end
	return length(seen)
	"""

	seen=Set(a^b for a::BigInt in 2:100 for b::BigInt in 2:100)

	return length(seen)
	
end


println(compute())