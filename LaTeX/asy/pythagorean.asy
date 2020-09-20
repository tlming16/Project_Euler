import fontsize;

size(6cm);

real a=3;
real b=4;
real c=5;
real angle = atan(3.0/4.0);

pair A=(0,0);
pair B=(c,0);
pair C=(c,c);
pair D=(0,c);

pair E=(b* cos(angle),b*sin(angle));
pair F= (a*cos(angle),a*sin(angle));
pair H;
pair G= C-(a*cos(angle),a*sin(angle));

//  G-H=E-F
H= G-E+F; 

filldraw( E--F--H--G--cycle,yellow);
draw(A--B--C--D--cycle);
draw(A--E);
draw(B--G);
draw(C--H);
draw(D--F);


filldraw(A--B--E--cycle,red+opacity(0.5));
filldraw(B--C--G--cycle,blue+opacity(0.5));
filldraw(C--D--H--cycle,green+opacity(0.5));
filldraw(D--A--F--cycle,cyan+opacity(0.5));
label("$b$",(B+G)/2+(0.2,0),fontsize(12));
label("$a$",(C+H)/2 +(0.1,-0.1),fontsize(12));
label("$c$",(B+C)/2+(0.1,0),fontsize(12));

dot((-0.2,-0.2),linewidth(0.1));
dot((5.2,5.2),linewidth(0.1));