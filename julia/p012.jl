include("divisor.jl")

function compute()

	triangle=0
	for i=1:100000000
		triangle+=i;
		if num_divisors(triangle)>500
			return triangle
		end
	end
end

print(compute())