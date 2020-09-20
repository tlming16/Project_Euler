import os 

file_list =os.listdir("./cpp-version") 

def fixed( f):
  context=[];
  with open (f,"r") as nf:
    context=nf.readlines();
    context[2]=context[2].replace("emial","email")
  with open(f,"w") as nf:
    for v in context:
      nf.write(v);



for f in file_list:
  if (f.endswith(".cpp")):
    fixed("./cpp-version/"+f) 