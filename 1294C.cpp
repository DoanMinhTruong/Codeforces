#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
	ll n ; cin >> n ;
	for(int i = 2; i * i <= n ; i ++){
		if( n %  i == 0 ){
			int d = n / i ;
			for(int j = i + 1; j * j < d ; j ++){
				if(d %j == 0 ) {
					cout << "YES" << endl;
					cout << i << " " << j <<" " <<  d / j << endl;
					return;
				}
			}
		}
	}
	cout << "NO" << endl;
}


int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t = 1; 
    cin >> t; 
    while(t--) solve();
}  