

function is_palidrome(n::Int64)
	a=Int64[]
	while n>=1
		push!(a,n%10);
		n=n-n%10;
		n/=10
		n=Int64(n)
		
	end
	len=length(a);
	if( len==1)  return true
	end
	for i=1:len
		if a[i]!=a[len+1-i]
			return false
		end
	end
	return true
end

function compute()
	N=1000
	ans=0
	for i=1:N
		for j=1:N
			if is_palidrome(i*j)
				ans=max(ans,i*j)
			end
		end
	end
	return ans
end

print(compute())