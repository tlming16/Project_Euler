
function compute()
	a=BigInt(1)
	n=a<<1000
	str=string(n)
	ans=0;
	for i=1:length(str)
		ans+=str[i]-'0'
	end
	return ans

end

println(compute())