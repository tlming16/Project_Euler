
function compute()
N=1000
ans=0
for i=1:N-1
	if(i%3==0|| i%5==0)
		global ans+=i
	end
end
ans
end

print(compute())
