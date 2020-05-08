#!/usr/bin/env python3 
# coding:utf-8  

import os 

svg_path ="svg/";

file_list = os.listdir(svg_path)
context="";
for f in file_list:
  if f.endswith(".svg"):
    text="![{}]({})\n".format(f[:-4],svg_path+f)
    context+=text
with open("gallery.md",'w') as ff:
  ff.write(context) 
