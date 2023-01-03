#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
	int  n , k ; cin >> n >> k ; 
	vector<int> a(n);
	int cnt = 0 ; 
	for(int &i :a) cin >> i , cnt += (i == 1) ;
	if(cnt ==0  ) {
		cout << "NO\n";return;
	}
	else{
		cout << "YES\n";
	}
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t = 1; 
    cin >> t; 
    while(t--) solve();
}  