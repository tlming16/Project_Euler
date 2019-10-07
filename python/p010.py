#!/usr/bin/python3 
# -*- coding:utf-8 -*- 
# author :mathm 
# email :tlming16@fudan.edu.cn 

class solution:
    __slots__=('n')
    
    def __init__(self,n:int):
        self.n=n 

    def is_prime(self,n):
        if n==2 or n==3 or n==5:
            return True
        if n<=1 or n%2==0 or n%3==0 or n%5==0:
            return  False
        j=3
        while True:
            if n%j==0: 
                return False 
            else :
                j+=2 
                if j*j>n:
                    return True 

    def sum(self):
        res=0
        for i in range(self.n):
            if self.is_prime(i):
                res+=i
        return res 

if __name__ == "__main__":
    import sys
    if len (sys.argv)==2:
        num =int(sys.argv[1])
    else :
        num=10
    s=solution(num)
    print(s.sum())

