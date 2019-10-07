#!/usr/bin/python3 
# -*- coding:utf-8 -*- 
# author:mathm 
# email:tlming16@fudan.edu.cn 

class solution:
    __slots__= ('num')

    def __init__(self,n:int):
        self.num=n 
    
    def pythagorean_triplet(self):
        p=self.num
        for a in range(int(p/2)):
            for b in range (a,int(p/2)):
                if p**2+2*a*b== 2*p*(a+b):
                    return a*b*(p-a-b)

         
                

if __name__== "__main__":
    import sys 
    if len(sys.argv)==2:
        num = int (sys.argv[1])
    else:
        num=12
    s=solution(num)
    print(s.pythagorean_triplet())

