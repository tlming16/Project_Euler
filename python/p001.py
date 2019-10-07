#!/usr/bin/python3 
# -*- coding:utf-8 -*-
# @author: mathm 
# @email :tlming16@fudan.edu.cn 

class solution:
    '''
    given n ,find the sum of all number from 1 to n which is the 
    multiples of three or five
    '''
    __slots__=('n')
    def __init__(self,n:int):
        self.n=n 
    def sum_of_multiples(self):
        res=0
        for value in range(1,self.n):
            if value%3==0 or value%5==0:
                res+=value 
        return res 
    

if __name__ == '__main__':
    s=solution(1000)
    print(s.sum_of_multiples())

