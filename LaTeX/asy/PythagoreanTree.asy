settings.tex = "xelatex";
usepackage("ctex");
size(10cm);
real a=3;
real b=4;
real c=hypot(a,b);

draw((-18,-10)--(-18,28)--(18,28)--(18,-10)--(-18,-10));
transform ta=shift(c,c)*rotate(-aCos(a/c))*scale(a/c)*shift(-c);
transform tb=shift(0,c)*rotate(aCos(b/c))*scale(b/c);

picture Pythagorean(int n) {
  picture pic;
  fill(pic,scale(c)*unitsquare,1/(n+1)*green+n/(n+1)*brown);
  if(n == 0) return pic;
  picture branch=Pythagorean(--n);
  add(pic,ta*branch);
  add(pic,tb*branch);
  return pic;
}
pair z=(-0.2,9);
path c1=circle(z,15);
path c2=circle(z,17);
filldraw(c1^^c2,evenodd+lightblue,black);
pair f(real x){
  return ( 16 * cos(pi/180 *x),16*sin(pi/180*x));
}

filldraw(circle(z,15),paleyellow);
pair sh =z + f(30);
pair x =z+ f(40);
pair s =z +f(50);
pair n = z+ f(60);

pair j= z+ f(90+60);
pair xi = z+ f(90+50);
pair si= z+f(90+40);
pair q = z+ f(90+30);

add(Pythagorean(9));

label("内",n,red);
label("省",s,red);
label("修",x,red);
label("身",sh,red);

label("见",j,red);
label("贤",xi,red);
label("思",si,red);
label("齐",q,red);
// 上海市第一中学 

pair shang= z+f(230);
pair hai  =z+f(240);
pair shi = z+f(250);
pair di= z+f(260);
pair yyi=z+f(270);
pair zh =z+f(280);
pair xue =z+f(290);
pair yi = z+ f(300);
pair bn= z+f(310);
label("上",shang);
label("海",hai);
label("市",shi);
label("第",di);
label("一",yyi);
label("中",zh);
label("学",xue);
label("一",yi);
label("班",bn);

label("$1$",(-3,13.5));
label("$1$",(3.5,10));
label("$1$",(-8,12));
label("$1$",(9.5,10));
label("$1$",(-11,9));
label("$1$",(9,13));

label("${2020}$",(-0.5,-3),purple);
label("$\mathcal{\infty}$",z+f(90),red);

