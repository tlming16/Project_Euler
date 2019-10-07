function compute()
	DIGITS=1000
	prev=BigInt(1)
	cur=BigInt(0)
	index=0;

	while true
		
		if length(string(cur))>DIGITS 
			throw(RuntimeError("Not found"))
		elseif length(string(cur))==DIGITS 
			return string(index)
		end

		prev,cur=cur,prev+cur
		index+=1
	end
   
end

println(compute())