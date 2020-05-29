#include <stdio.h>
#include <mpfr.h> 
#include <math.h>

// gcc p080.cc  -lmpfr -lgmp -lm 
int main(){
    mpfr_t s;
    mpfr_init2(s,400);
    int ans =0;
    for (int d=2;d<=100;d=d+1){ 
        int v= sqrt(d*1.0);
        if (v*v==d) continue;
        mpfr_set_d(s,d,MPFR_RNDD);
        mpfr_sqrt(s,s,MPFR_RNDD);
        //mpfr_out_str(stdout,10,0,s,MPFR_RNDD);
        char *root2;
        mpfr_exp_t e;
        root2=mpfr_get_str(NULL,&e,10,0,s,MPFR_RNDD);
        for(int i=0;i<100;i++) {
            ans =ans + (root2[i]-'0');
         }
    
    } 
    printf("%d\n",ans);
    mpfr_clear(s);
}
