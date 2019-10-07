
function fifth_power_digit_sum(n::Int)

	a=Int[];

	while(n>=1)
		push!(a,n%10);
		n=n-n%10;
		n/=10;
		n=Int(n)
	end
	ans=0;
	for i in a
		ans+=i^5
	end
	return ans
end


function compute()
	ans=0
	for i=2:1000000
		if i==fifth_power_digit_sum(i)
			ans+=i
		end
	end
	return ans
end

println(compute())