#!/usr/bin/python3 
#-*- coding:utf-8 -*- 

class solution:
    
    def __init__(self,n):
        self.n=n

    def len(self,num):
        if num>self.n:
            return -1
        digit=set()
        digit.add(1)
        res=1
        while True:
            while res<num:
                res*=10
            
            rm= int(res/num)
            res=res-num*rm
            if res in digit or res==0:
                return len(digit)
            else:
                digit.add(res)
    
if __name__ == "__main__":
    import sys
    if len(sys.argv)==2:
        n=int(sys.argv[1])
    else:
        n=1000
    s=solution(n)
    res=1
    index=0;
    for j in range(1,s.n):
        tmep=s.len(j)
        if tmep>res:
            res=tmep
            index=j

    print('index={},len={}'.format(index,res))

