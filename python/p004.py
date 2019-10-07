#! /usr/bin/python3 
# -*- coding:utf-8 -*- 
# @author:mathm
# @email :tlming16@fudan.edu.cn 

class solution:

    def __init__(self):
        pass 
    def is_palindrome(self,num:int):
        s=str(num)
        return s[:]== s[::-1]
    
    def get_the_largest_num(self):
        res=0
        for i in range(999,100,-1):
            for j in range (i-1,1000):
                s=str(i*j)
                if s[:]==s[::-1]:
                    if res<i*j:
                        res=i*j 
        return res 
                    
    
                    



if __name__ == "__main__":
    s =solution()
    print(s.get_the_largest_num())


