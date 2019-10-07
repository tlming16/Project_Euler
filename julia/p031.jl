
function compute()

	TOTAL=200

	ways=fill(0,TOTAL+1)
	ways[1]=1

	for coin in [1,2,5,10,20,50,100,200]
		for i =1: length(ways)-coin
			ways[i+coin]+=ways[i]
		end
	end

	return ways[length(ways)]

end


println(compute())