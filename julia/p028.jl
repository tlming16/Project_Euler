

function compute()
	SIZE=1001
	ans=1
	ans+=sum(4*i*i-6*(i-1) for i in 3:2:SIZE)

	return ans
end


println(compute())
