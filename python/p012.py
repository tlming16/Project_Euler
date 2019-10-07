#!/usr/bin/python3 
#-*- coding:utf-8 -*- 
# author: mathm 
# email: tlming16@fudan.edu.cn
from factor_pair import factor_pair
from is_prime import is_prime 
class solution:
    __slots__=('num')

    def __init__(self,n:int):
        self.num=n 
    
    def factor_num(self,num:int):
        n=num
        pair_n = factor_pair(n) 
        pair_nplus= factor_pair(n+1) 
        
        res=1
        for j in range(1,len(pair_n)):
            res*=pair_n[j][1]
        for j in range(1,len(pair_nplus)):
            res*=pair_nplus[j][1]

        if pair_n[0][0]==2:
            res*=(pair_n[0][1]-1)
            res*=pair_nplus[0][1]
            return res 
        else:
            res *=(pair_nplus[0][1]-1)
            res*=pair_n[0][1]
            return res 

    
    def get_number(self):
        num=2
        while True:
            s=self.factor_num(num)
            if s>= self.num:
                return num*(num+1)/2 
            else :
                num+=1
            
if __name__ == "__main__":
    import sys
    if len (sys.argv) == 2:
        num = int (sys.argv[1])
    else :
        num = 10 
    s=solution(num)
    print(s.get_number()) 

