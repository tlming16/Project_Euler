
function compute()

	n=BigInt(100)
	str=string(factorial(n));
	ans=0
	for i=1:length(str)
		ans+=str[i]-'0'
	end
	return ans

end


println(compute())