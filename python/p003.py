#!/usr/bin/python3 
# -*- coding:utf-8 -*- 
# @author :mathm 
# @email :tlming16@fudan.edu.cn 

import sys

class solution:
    __slots__=('num')

    def __init__(self,n):
        self.num=n 

    def largest_prime(self):
        num=self.num
        current=2
        while True:
            if num %current==0:
                while num%current==0:
                    num/=current
            current+=1 
            if num==1:
                return current-1 
        
                
        

if __name__ == '__main__':
    if len(sys.argv)==2:
        num=int(sys.argv[1])
    else:
        num=1000
    s=solution(num)
    print(s.largest_prime())


            
