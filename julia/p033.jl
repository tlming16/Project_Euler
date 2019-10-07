function  compute()
	numer=1
	denom=1

	for d=10:99
		for n =10:d-1
			n0=n%10
			n1=Int((n-n0)/10)
			d0=d%10
			d1=Int((d-d0)/10)
			if (n1==d0 && n0*d==n*d1)||(n0==d1&&n1*d==n*d0)
				numer*=n
				denom*=d
			end
		end
	end

	return Int(denom/gcd(numer,denom))
end


println(compute())






