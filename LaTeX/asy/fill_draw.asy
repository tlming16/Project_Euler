import graph;
size(6cm,6cm);

real f(real x){
  return x^2;
}

path p=graph(f,0,1,operator ..) --(1,1)--(1,0)--(0,0)--cycle;

filldraw(p,0.3red+white);