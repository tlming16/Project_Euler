
function compute()

	N=1000
	for a=1:N
		for b=a+1:N
			c=N-a-b
			if a^2+b^2==c^2
				return a*b*c

			end
		end
	end
end

print(compute())