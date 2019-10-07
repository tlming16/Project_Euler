
include("next_permutation.jl")

function compute()

	a=collect(0:9)

	const N=999999
	for i=1:N
		if !next_permutation(a)
			return 
		end
	end
    ans=0
    for c in a
       ans =ans *10 +c
    end

    return string(ans)

	

end

println(compute())




