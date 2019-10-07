
function  count_solution(p::Int)
	ans=0

	for a=1:p
		for b=a: floor(Int,(p-a)/2)
			c=p-a-b
			if a^2+b^2==c^2
				ans+=1
			end
		end
	end

	return ans

end


function compute()
	ans=-1
	index=0;
	for i=1:1000
		cnt=count_solution(i);
		if ans<cnt
			ans=cnt
			index=i
		end
	end

	return index
end


println(compute())