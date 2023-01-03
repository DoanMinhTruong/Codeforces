#include <bits/stdc++.h>
#define ll long long
using namespace std;

string findd(string a  , string b ) {
	string temp = "" ;
	for(int i = 0;  i < b.length() ; i ++){
		temp += b[i] ; 
		string temp2 = "" ;
		while(temp2.length() < a.length())
			temp2 += temp; 
		if(temp2 == a) return temp ; 
	}
	return "-1";
}
int count(string a, string  b) {
	string temp = "" ; 
	int ans = 0; 
	while(temp.length() < a.length()){
		temp += b ; ans ++; 
	}
	return ans ; 
}

void solve(){
	string s , t ; cin >> s >> t ;
	int n1 = s.length() , n2 = t.length() ;  
	if(n1 < n2 ){
		swap(s , t) ; swap(n1 , n2 ) ;
	}
	string find = findd(s , t ); 
	if(find == "-1") cout << -1 << endl;
	else{
		int num1 = count(s , find);
		int num2 = count(t , find);
		// cout << num1 << " " << num2 << endl;
		int res = std::lcm(num1 , num2) ; 
		for(int i = 0; i < res ; i ++) cout << find ; 
			cout << endl;
	}
	
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t = 1; 
    cin >> t; 
    while(t--) solve();
}  