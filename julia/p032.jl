
function has_pandigital_product(n::Int)

	sqrtn=floor(Int,sqrt(Float64(n)))
	for i=1:sqrtn
		if  n%i==0
			str=string(n)*string(i)*string(Int(n/i))
			if Set(str)==Set("123456789")
				return true
			end
		end
	end

	return false
end

function compute()

	ans=sum( i for i in 1:10000 if has_pandigital_product(i) )
	return ans

end


println(compute())



			
