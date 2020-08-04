# include<iostream>
# include <queue> 
# include <vector> 
# include <string>
# include <sstream>
# include <set>

using namespace std;

vector<string> split( const string & str,const string chm){
  set<char> s(chm.begin(),chm.end());
  char c= chm[0];
  vector<string> ans;
  string st=str;
  for(int i=0;i<str.size();i++){
    if (s.count(str[i])){
      st[i]=c;
    }
  }
  istringstream is(st);
  string item;
  while( getline(is,item,c)){
    if (!item.empty()) {
      ans.push_back(item);
    }
  }
  return ans;

}

int main(){
  string s="giuai,h hiaoh? uhi_ghiu!";
  string ch=" ?!,_";
  cout<<s<<endl;
  for(auto x: split(s,ch)){
    cout<<x<<endl;
  }
  
}