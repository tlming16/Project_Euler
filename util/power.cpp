# include <iostream>
# include <string> 
# include <vector>
# include <algorithm>
# include <iterator>
# include <unordered_map>
using namespace std;

vector<int> digit(int n) {
  vector<int> v;
  while (n){
    v.push_back( n%2);
    n/=2;
  }
  vector<int> ans;
  for (int i=0;i<v.size();i++) {
    if ( v[i]!=0){
      ans.push_back( i);
    }
  }
  reverse(ans.begin(),ans.end());
  return ans;
}
string power(int n,unordered_map<int,string> & mp){

  if (n==1){
    return "2(0)";
  }
  if ( n==2){
    return "2";
  }
  if (mp.count(n)){
    return mp[n];
  }
  vector<int> ans =digit(n);
  string res;
  for (int i=0;i<ans.size()-1;i++){
    string s;
    if ( mp.count( ans[i])) {
      s= mp[ans[i]];
    }else {
      s= power(ans[i],mp);
      mp[ans[i]]=s;
    }
    if (s!="2(0)")
      res += "2("+s+")" +"+";
    else res+="2+";
  }
  string s ;
  if (mp.count( ans.back())) {
    s=mp[ans.back()];
  }else {
    s= power(ans.back(),mp);
    mp[ans.back()]=s;
  }
  if (s!="2(0)")
  res+= "2("+ s +")";
  else  res+="2"; 
  mp[n]=res;
  return res;

}

int main(){
  unordered_map<int,string> mp;
  mp[0]="0";
  mp[1]="2(0)";
  mp[2]="2";
  mp[3]="2+2(0)";
  mp[4]="2(2)";
  mp[5]="2(2)+2(0)";
  mp[6]="2(2)+2";
  mp[7]="2(2)+2+2(0)";
  mp[8]="2(2+2(0))";
  int n;
  cin>>n;
  cout<<power(n,mp)<<endl;
  return 0;

}
