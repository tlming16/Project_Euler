#!/usr/bin/python3 
# -*- coding:utf-8 -*- 

class solution:
    __slots__=('num')
    
    def __init__(self,n:int):
        self.num=n

    def diff(self):
        sum_sq=0
        sq_sum=0
        for v in range(self.num+1):
            sq_sum+=v**2
            sum_sq+=v
        return sum_sq**2-sq_sum 


if __name__ == "__main__":
    import sys 
    if len (sys.argv)==2:
        num=int(sys.argv[1])
    else: 
        num=100 
    s=solution(num)
    print(s.diff()) 

