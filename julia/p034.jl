
function  factorial_digit_sum(n::Int)
	ans=0

	while( n>=1)
		ans+=factorial( n%10);
		n=floor(Int,n/10)
	end

	return ans

end

function compute()

	ans =sum( i for i =3:10000000 if i==factorial_digit_sum(i))

	return ans
end


println(compute())