#!/usr/bin/env  python3 
# coding:utf-8
from ctypes import * 
if __name__ =='__main__':
  lib_name ="./libexample.dll" 
  lib= cdll.LoadLibrary(lib_name)
  print(lib.add(c_int(10),c_int(10)));