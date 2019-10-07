
function num_divisors(n::Int64)
	sqrtn::Int64=floor(Int64,sqrt(n))
	result=0

	for i=1:(sqrtn+1)
		 if n%i==0
			result+=2
		end
	end
	
	if sqrtn^2==n
		result-=1
	end
    return result
end
"""
#print( num_divisors(100))
"""
