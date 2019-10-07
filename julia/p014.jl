
function collatz_chain_length(x::Int)
	if x==1
		return 1
	end
	if x%2==0
		x=Int(x/2)
	else
		x=x*3+1
	end
	return collatz_chain_length(x)+1
end

function collatz_length(x::Int)
	if x==1  
		return 1
	end
	count=1;
	while x!=1
		count+=1
		if x%2==0
			x=Int(x/2)
			if x==1 
				break
			end
		else
			x=x*3+1
		end
		
	end
	return count
end




function compute()
    const N=1000000
    ans =0
    index=1
	for i=1:N
		if ans<collatz_chain_length(i)
			index=i 
			ans=collatz_chain_length(i)
		end
	end

	return index
end

function compute2()
	 const N=1000000
    ans =0
    index=1
	for i=1:N
		if ans<collatz_length(i)
			index=i 
			ans=collatz_length(i)
		end
	end

	return index
end


print(compute2())