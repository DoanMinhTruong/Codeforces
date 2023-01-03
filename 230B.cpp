#include <bits/stdc++.h>
#define int long long
using namespace std;
 
const int mxN = 1e6 + 1; 
bool isPrime[mxN];
 
void sieve(){
	memset(isPrime ,true ,sizeof isPrime);
	isPrime[0] = isPrime[1] = false;
	for(int i =2 ; i <= sqrt(mxN); i++){
		if(isPrime[i]){
			for(int j = i * i ; j <= mxN ; j += i) isPrime[j] = false;
		}
	}
}
 
void solve(){
	
	int n ; cin >> n ;
	int a = sqrt(n) ;
	if( a * a == n ) {
		if(isPrime[a]) cout <<"YES" << endl;
		else cout << "NO" <<endl;
	}else cout << "NO" << endl;
}
 
int32_t main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    sieve();
    int t = 1; 
    cin >> t; 
    while(t--) solve();
}  