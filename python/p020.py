#!/usr/bin/python3 
#-*- coding:utf-8 -*- 


class solution:
    
    def __init__(self,n):
        self.n=n

    def compute(self):
        s=1
        for v in range(1,self.n+1):
            s*=v
        
        str_res=str(s)
        res=0
        for digit in str_res:
            res+= int(digit)
        return res


if __name__ == "__main__":
    import sys
    if len(sys.argv)==2:
        n=int(sys.argv[1])
    else:
        n=100
    s=solution(n)
    print(s.compute())


