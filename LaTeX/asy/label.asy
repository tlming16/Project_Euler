size(10cm,10cm); 
Label L(int i) {
   if(i==0) return Label("$0$",(0,0));
   if (i==1) return Label("$\frac{\pi}{2}$",align=(pi/2,0));
   if (i==2) return Label("$\pi$",align=(pi,0));
   if(i%2==0) return Label(format("${%f}\pi$",i/2),align=(pi*i/2,0));
   else return Label(format("$\frac{{%d}\pi}{2}$",i),align=(pi*i/2,0));
}  
pair P(int i){return (i*pi/2,0);}
pair [] star =sequence(P,20);
Label [] labs=sequence(L,20);
dot(labs,star);

