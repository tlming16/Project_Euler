# include <iostream>
# include <set> 
# include <vector>
using namespace std;

bool digit(int a,set<int> & s){
    while(a){
        if(!s.insert(a%10).second || a%10==0){
            return false;
        };
        a/=10;
    }
    return true;
}

bool three_tuple(int a,set<int> & s){
    bool m1= digit(a,s);
    if (m1==false){
        return false;
    }
    bool m2=digit(2*a,s);
    if ( m2==false) {
        return false;
    }
    bool m3= digit(3*a,s);
    if( m3==false){
        return false;
    }
    return true;
}

int main(){
    for(int i=100;i<999;i++){
        set<int> s;
        if ( three_tuple( i,s)) {
            cout<<i<< " "<<2*i<<" "<<3*i<<endl;
        }
    }
    return 0;
}