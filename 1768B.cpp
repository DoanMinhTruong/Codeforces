#include <bits/stdc++.h>
#define ll long long
using namespace std;


void solve(){
	ll n , k ; cin >> n >> k  ; 
    int a[n];
    for(int i = 0 ; i < n ; i ++) cin >> a[i];
    ll x = 0 , y = 1 ;
    for(int i =0 ; i < n ; i ++) {
        if(a[i] == y){
            x ++ , y ++ ; 
        }
    }
    ll ans = n - x ;
    if(ans % k ==0 ) cout << ans / k << endl;
    else cout << ans / k + 1 << endl;

}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t; cin >> t;
    while(t--) solve();
}  