function  compute()

	divisorsum=fill(0,10000)
	divisorsum[1]=1

	for i =1:length(divisorsum)
		for j=2*i:i:length(divisorsum)
			divisorsum[j]+=i
		end
	end
	ans=0

	for i=1:length(divisorsum)
		j=divisorsum[i]
		if j!=i && j<length(divisorsum) && divisorsum[j]==i 
			ans+=i 
		end
	end
	return ans
end


println(compute())