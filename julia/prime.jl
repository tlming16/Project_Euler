function  is_prime(n::Int64)
	if(n<=1)  return false
	end
	if(n==2)  return true
	end
     if( n%2==0)  return false
     end
	i::Int64=3
	while(i*i<=n)
		if( n%i==0)  return false
		end
		i+=2
	end

	return true;

end
"""
# test 
for i=1:100
	if( prime(i))
		print(i,"  ")
	end
end
"""

function prime(N::Int64,a::Array{Int64,1})
	  b=fill(true,N);
	  b[1]=false;
	  for i=2:N
	  	for j=i*i:i:N 
	  		if(b[i])
	  			b[j]=false
	  		end
	  	end
	  end

	  for i=1:N
	  	if (b[i]) 
	  		push!(a,i)
	  	end
	  end
end

"""
# test
a=Int64[]
prime(100,a)

print(a)

"""


function prime_table(n::Int)
	b=fill(true,N);
	b[1]=false;
	for i=2:N
	 for j=i*i:i:N 
	 	if(b[i])
	 		b[j]=false
	  	end
	  end
	end
	return b
end

