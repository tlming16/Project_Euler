include("prime.jl")

function compute()
N=1999999
a=Int64[]
prime(N,a)
ans=sum(a)

return ans
end

print(compute())