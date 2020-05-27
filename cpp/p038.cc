/*
see from https://projecteuler.net/problem=38
Take the number 192 and multiply it by each of 1, 2, and 3:
192 × 1 = 192
192 × 2 = 384
192 × 3 = 576
By concatenating each product we get the 1 to 9 pandigital, 192384576. 
We will call 192384576 the concatenated product of 192 and (1,2,3)
The same can be achieved by starting with 9 and multiplying by 1, 2, 3, 4, and 5,
giving the pandigital, 918273645, which is the concatenated product of 9 and (1,2,3,4,5).
What is the largest 1 to 9 pandigital 9-digit number that can be formed as the concatenated 
product of an integer with (1,2, ... , n) where n > 1?

*/
# include <set>
# include <vector>
# include <iostream>
# include <string>
# include <tuple>
using namespace std;
class pandigital_multiple{
    public:
       set<int> m;
       bool flag=false;
    void get_digit(int n){
        while(n){
            if(!m.insert(n%10).second){
                flag=true;
            }
            n/=10;
        }
    } 
    bool same() const {
        set<int> digit={1,2,3,4,5,6,7,8,9};
        return m ==digit;

    }
    void reset() {
        m.clear();
        flag=false;
    }

    bool get_n(int n,int & res){
        for(int i=1;;i++){
            get_digit(n*i);
            if (flag) return false;
            if (same()) {
                res=i;
                return true;
            }

        }
    return true;

    }

};


int main(){
    vector<tuple<string,int,int>> v;
    pandigital_multiple pm;
    for(int i=1;i<9999;i++){
        pm.reset();
        int  res=-1;
        if (pm.get_n(i,res)) {
            string s;
            for(int c=1;c<=res;c++) {
                s+= to_string(i*c);
            }
            v.emplace_back(s,i,res);
            continue;
        }
    }
    for(auto x:v){
        cout<<get<0>(x)<<" by "<<get<1>(x)<<" multiply 1.. "<<get<2>(x)<<endl;
    }
}
