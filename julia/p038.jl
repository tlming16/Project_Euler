
function compute()
  ans=""
	for n=2:9
		a=10^(floor(Int,9/n))
		
		for i =1:a
			s=""
			for j=1:n
				s=s*string(i*j)
				
			end
			if Set(s)==Set("123456789") && length(s)==9
				ans=max(s,ans)
			end
		end
	end

	return ans
end


println(compute())


