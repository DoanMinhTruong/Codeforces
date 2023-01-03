#include <bits/stdc++.h>
#define ll long long
using namespace std;



void solve(){
	ll n ; cin >> n ;
	ll res1 = 1 , res2 = 0 ;  
	vector<ll> seq ; 
	ll mx = 0 ; 
	for(int i = 2; i <= n ; i++){
		if( n % i == 0 ){
			int cnt = 0 ; 
			res1 *= i ;
			while( n % i == 0 ) {
				cnt++ ; n /= i ; 
			}
			seq.push_back(cnt) ;
			while((1 << mx) < cnt) mx ++ ;  
		}
	}	
	res2 = mx ; 
	for(int i = 0; i < seq.size() ; i++){
		if(seq[i] < (1 << mx)){res2 ++ ; break;}
	}
	cout << res1 << " " << res2 << endl;
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t = 1; 
    // cin >> t; 
    while(t--) solve();
}  