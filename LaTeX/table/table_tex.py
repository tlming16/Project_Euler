#!/usr/bin/env python3
# coding:utf-8
# author mingtinglai@qq.com 
# simple scripts to transfrom text to LaTeX table 
import sys
def generate_tex_table(file_in,file_out):
    file=file_in
    tex=file_out 
    with open(file) as ftext:
      context =ftext.readlines()
    f=open(tex,'w');
    f.write("\\documentclass{article}\n")
    f.write("\\usepackage{ctex}\n")
    f.write("\\usepackage{amsmath}\n")
    f.write("\\begin{document}\n")
    f.write("\\begin{table}\n")
    f.write("\\begin{tabular}{")
    n= len(context[0].split(' '))
    for i in range(n):
      f.write("|c")
    f.write("|")
    f.write("}\n")
    for text in context:
      text = text.split()
      f.write("\\hline\n")
      for v in range(len(text)):
        f.write(text[v])
        if v !=len(text)-1:
          f.write('&')
      f.write("\\\\\n")
    f.write("\\hline\n")
    f.write("\\end{tabular}\n")
    f.write("\\end{table}\n")
    f.write("\\end{document}\n")

if __name__ =="__main__":
  if len(sys.argv)>2:
    file_in = sys.argv[1] 
    file_out =sys.argv[2]
  else:
    file_in ='text.txt'
    file_out ='generate_tex_table.tex'
  generate_tex_table(file_in,file_out)
    


