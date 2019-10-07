function compute()
	ans=1
	for i=1:20
		a=gcd(i,ans)
		ans*=Int(i/a);

	end
	return ans
end


print(compute())