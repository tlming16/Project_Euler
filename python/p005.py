#!/usr/bin/python3
#-*- coding:utf-8 -*- 
# author :mathm 
# email: tlming16@fudan.edu.cn 
import sys 
class solution :

    def __init__(self,n:int):
        self.n=n
    
    def prime(self,n:int):
        isprime=[True]*(n+1) 
        isprime[0]=False
        isprime[1]=False 
        for i in range(2,n):
            if isprime[i]:
                for j in range(i*i,n,i):
                    isprime[j]=False 
        res=[]
        for i in range(n+1):
            if isprime[i]:
                res.append(i) 
        return res 
    def smallest_num(self):
        prime_list=self.prime(self.n)
        res=1
        for v in prime_list:
            prime=v
            while v<self.n:
                v*=prime 
            res*=int(v/prime) 
        return res 

if __name__ == '__main__':
    if len(sys.argv)==2:
        num=int(sys.argv[1])
    else:
        num=10

    s=solution(num)
    print(s.smallest_num())

