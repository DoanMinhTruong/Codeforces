#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
	int n ; cin >> n ;
	vector<int> a(n);
	for(int& i : a) cin >> i ;
	int l = 0 , r = 0; 
	for(int i =0 ; i < n - 1 ; i++){
		if(a[i+1 ] < a[i]) {
			l = i ; 
			break;
		}
	}
	for(int i = n-1 ; i >= 1; i --){
		if(a[i] < a[i - 1]){
			r = i ; 
			break;
		}
	}
	reverse(a.begin() + l , a.begin() + r + 1 );
	bool check = false;
	for(int i =0 ; i < n -1 ; i ++){
		if(a[i+ 1] < a[i]){
			check = true;
			break;
		}
	}
	if(check) cout <<"no" << endl;
	else{
		cout <<"yes" << endl;
		cout << l + 1 << " " << r + 1 << endl;
	}
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t = 1; 
    // cin >> t; 
    while(t--) solve();
}  