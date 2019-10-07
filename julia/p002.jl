
function compute()
N=4000000
ans=0
x=1
y=2
while x<=N
	if(x%2==0)
		 ans+=x
	end
	 x,y=y,x+y

end
ans
end
print(compute())
