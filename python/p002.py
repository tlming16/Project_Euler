#!/usr/bin/python3 
# -*- coding:utf-8 -*- 
# @author : mathm
# @emial :tlming16@fudan.edu.cn

class solution:
    __slots__=('current_num','pre_num')
    def __init__(self,n1,n2):
        self.pre_num=n1
        self.current_num=n2
    def get_next(self):
        res=self.pre_num+self.current_num 
        self.pre_num=self.current_num
        self.current_num=res
        return res 


if __name__ == "__main__":
    s=solution(0,1)
    BIG_NUM=4000000
    res=0
    while True:
        next_value=s.get_next()
        if next_value>BIG_NUM: 
            break
        if next_value %2==0:
            res += next_value
    print(res)
