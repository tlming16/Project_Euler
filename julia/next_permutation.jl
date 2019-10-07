
function next_permutation{Container}(arr::Container)

	len=length(arr)
	i=len
	while i>1 && arr[i-1]>=arr[i]
		i-=1
	end
	if i<=1
		return false
	end
	begin
		j=len
		while arr[j]<=arr[i-1] 
			j-=1
		end
		arr[i-1],arr[j]=arr[j],arr[i-1]
	end
	begin
	    j=len 
	    while i<j
	    	arr[i],arr[j]=arr[j],arr[i]
	    	i+=1
	    	j-=1
	    end
	end

	    return true

	end


""" 
# test 
   a=collect(1:5)
   while next_permutation(a)
       println(a)
   end

"""