#include <bits/stdc++.h>
#define ll long long
using namespace std;

int convert(string s){
	if(s == "M") return 0 ;
	if(s.back() == 'L') return s.length();
	return -(s.length());
}

void solve(){
	string a , b; 
	cin >> a >> b ;
	if(convert(a) < convert(b)) cout << "<" << endl;
	else if(convert(a) > convert(b)) cout << ">" << endl; 
	else cout << "=" << endl; 

}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t = 1; 
    cin >> t; 
    while(t--) solve();
}  