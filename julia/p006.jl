
function compute()
	N=100
	s1=sum(i for i=1:N)
	s2=sum(i*i for i=1:N)

	return s1^2-s2
end


print(compute())