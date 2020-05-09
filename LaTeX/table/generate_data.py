
f=open("data.txt",'w')
for i in range(0,100):
  f.write(str(i))
  if i>0 and i%10==9:
    f.write('\n');
  else:
    f.write(' ')
