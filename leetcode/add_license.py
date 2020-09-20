#!/usr/bin/env python3 
#-*- coding:utf-8 -*-

import os 
author = " * author:tlming16\n"
email = " * email:tlming16@fudan.edu.cn\n"
license = " * all wrong reserved\n"

text= "/* \n" + author + email+ license +"*/\n";
file_list =os.listdir("./test");
def write_file( f):
  if not f.endswith(".cpp"):
    return 
  context=None;
  with open(f,'r') as nf:
    context = nf.read();
  with open(f,"w") as nf:
    nf.write( text);
    nf.write(context);
  os.system(" mv {} {}".format(f,"./cpp/"))
for f in file_list:
  write_file("./test/"+f);


