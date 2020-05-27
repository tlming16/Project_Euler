/*
see from https://projecteuler.net/problem=42 

The nth term of the sequence of triangle numbers is given by, 
tn = ½n(n+1); so the first ten triangle numbers are:
1, 3, 6, 10, 15, 21, 28, 36, 45, 55, ...
By converting each letter in a word to a number 
corresponding to its alphabetical position 
and adding these values we form a word value.
 For example, the word value for SKY is 19 + 11 + 25 = 55 = t10. 
 If the word value is a triangle number then we shall call the word a triangle word.
Using words.txt (right click and 'Save Link/Target As...'), 
a 16K text file containing nearly two-thousand common English words, how many are triangle words?
*/




# include <iostream>
# include <fstream> 
# include <string>
# include <vector>
# include <algorithm> 
# include <cmath>
# include <unordered_set>
using namespace std;
// unordered_set<int> triangle_num;
bool is_triangle_number( int n){
     int k = static_cast<int>(sqrt(2*n));
     return k*(k+1)==2*n;
    //return triangle_num.count(n);

}
int string_to_num(string s){
    int n=0;
    for(int i=0;i<s.size();i++) {
        if ('a'<=s[i] && s[i]<='z') {
            n+= s[i]-'a'+1;
        } else if ('A'<=s[i] && s[i]<='Z') {
            n+=s[i]-'A'+1;
        }

    } 

    return n;

} 


int main(){

/* 
 * for(int i=1;i<100;i++){
 	    triangle_num.insert(i*(i+1)/2);
  }
 */
    ifstream fin("p042_words.txt");
    string s;
    int ans=0;
    while(getline(fin,s,',')){
        int num =string_to_num(s);
        if (is_triangle_number(num)) {
            ans+=1;
         }

    } 
    cout<<ans<<endl;

}
