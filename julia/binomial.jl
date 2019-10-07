
function binomial(n::Int,m::Int)
	# \Choose{n}{m}
	ans=1
	for i=1:m
		ans *=(n+1-i)
		ans/=i
		ans=Int(ans)
	end
	return ans

end
"""
# test
for i=0:10
println(binomial(10,i))
end
"""

