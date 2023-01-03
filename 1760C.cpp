#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
	int n ; cin >> n ;
	vector<int> a(n) , b;
	for(int &i : a) {
		cin >> i ;
		b.push_back(i);
	}	
	sort(b.begin()  , b.end()) ; 
	int mx = b.back();
	int mxs = b[b.size() - 2] ;
	for(int i : a){
		if(mx == i ){
			cout << i - mxs << " ";
		}else cout << i - mx << " ";
	}
	cout << endl;
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t = 1; 
    cin >> t; 
    while(t--) solve();
}  