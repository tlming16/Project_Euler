function reciprocal_cycle_len(n::Int)
	seen=Dict{Int,Int}()
    x=1
    index=1
	while true

		if x in keys(seen)
			return index-seen[x]+1
		else
			seen[x]=index
			x=x*10 %n 
		end
		index+=1
	end
end

function compute()
	ans=0
	for i =1:1000
		ans=max(ans,reciprocal_cycle_len(i))
	end

	return ans

end


println(compute())
