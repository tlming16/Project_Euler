/*  
* Solution to Project Euler problem 16
* by mathm   
*/
# include <string>
# include <vector>
# include <iostream>
class bigint;

int compute();

int main(){
	using std::endl;
	using std::cout;

	cout<<compute()<<endl;
}

class bigint{
	static const int base=10;
	typedef long long int64;
public:
	bigint(){}
	bigint(std::string s){
		for(int i=0;i<s.size();i++){
			buf.push_back(s[s.size()-1-i]-'0');
		}
	}
	bigint( int64 num){
		while(num>0){
			buf.push_back(num%base);
			num/=base;
		}
	}
	 std::string to_string() {
	 	 std::string res;
	 	 for (int i=0;i<buf.size();i++){
	 	 	res.push_back( buf[size()-1-i]+'0');
	 	 }
	 	 return res;
	 }
	 int size() const {
	 	return buf.size();
	 }
	 std::vector<int> data() const {
	 	return buf;
	 }
	void add(int64);
	void add( const bigint & other);

private:
	void norm(){
		int carry=0;
		for( int i=0;i<size();i++){
			int temp=(buf[i]+carry)%10;
			carry=(buf[i]+carry)/10;
			buf[i]=temp;
		}
		if( carry>0){
			buf.push_back(carry);
		}

	}
	std::vector<int> buf;

};


void bigint::add(int64 num){
	int index=0;
	while(index<size()){
		buf[index++]+=num%10;
		num/=10;
		if( num==0)  return ;
	}
	while(num>=1){
		buf.push_back(num%10);
		num/=10;
	}
	norm();

}
void bigint::add(const bigint & other){
	int m=size();
	int n=other.size();
	int index =0;
	if(n<=m){
		for( ;index<n;index++){
			buf[index]+=other.buf[index];
		}

		norm();
	}else{
		for(;index<m;index++){
			buf[index]+=other.data()[index];
		}
		for(;index<n;index++){
			buf.push_back(other.buf[index]);
		}
		norm();

	}
}


int compute(){

	const int n=1000;
	bigint a("1");
	for(int i=0;i<n;i++){
		a.add(a);
	}
	int ans=0;
	for( auto x:a.data()){
		ans+=x;
	}

	return ans;

}