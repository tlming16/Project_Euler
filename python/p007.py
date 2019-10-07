#!/usr/bin/python3 
# -*- coding:utf-8 -*- 
# author :mathm 
# emali :tlming16@fudan.edu.cn 

class solution:
    
    __slots__=('num')

    def __init__(self,n:int):
        self.num=n

    def is_prime(self,n):
        if n==2 or n==3 or n==5:
            return True 
        if n<0 or n%2==0 or n%3==0 or n%5==0:
            return False 
        s=7
        while s*s<=n:
            if n%s==0:
                return False 
            s+=2
        return True 

    def nth_prime(self):
        n=self.num 
        if n==1:
            return 2
        if n==2:
            return 3
        s=2
        j=5
        the_prime=-1
        while s<n:
            if self.is_prime(j):
                s+=1
                the_prime=j
            j+=2
        return the_prime 


if __name__== "__main__":
    import sys 
    if len(sys.argv)==2:
        num =int(sys.argv[1])
    else :
        num=6
    s=solution(num)
    print(s.nth_prime())
