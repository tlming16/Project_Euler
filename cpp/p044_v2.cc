# include <unordered_set>
# include <vector>
# include <algorithm> 
# include <cmath>
# include <iostream>
using namespace std;

bool is_pentagon_number(int x){
    int m = sqrt(1+24*x);
    return (m*m==1+24*x) && (m+1) %6==0;

}
int p_i(int i) {
    return i*(3*i-1)/2;
}
unordered_set<int> pentagon_number;
int main() {
    for( int i=1;i<10000;i++){
        pentagon_number.insert(i*(3*i-1)/2);
    }
    for (int i=1;i<pentagon_number.size();i++) {
        for (int j=i+1;j<pentagon_number.size();j++){
            if  (pentagon_number.count(p_i(j)-p_i(i)) && is_pentagon_number(p_i(i)+p_i(j))) {

                cout<< p_i(j) -p_i(i)<<endl;

            } 

        }

    }

}
