
function compute()
	"""
	s=Array{Char,1}()
	for i=1:1000000
		for c in string(i)
			push!(s,c)
		end
	end
	"""
	s=String[];
	for i=1:1000000
		push!(s,string(i))
	end
	s=string(s...)

	ans=1
	for i=1:6
		aa=parse(Int,s[10^i])
		ans *= aa
	end
	return ans

end


println(compute())


