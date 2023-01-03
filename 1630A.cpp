#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
	int n , k ; cin >> n >> k ; 
	vector<int> a(n/2 , 0 ) , b(n/2 , 0 );
	for(int i = 0 ; i < n / 2 ; i ++){
		a[i] = i;
		b[i] = (n - 1) - i ;
	}
	if( 0 < k && k < n / 2) 
		swap(b[0] , b[k]);
	else if(n / 2 <= k && k < n -1 )
		swap(b[0] , a[n - 1 - k]);
	else if( k == n - 1 ) {
		if( n == 4 ) {
			cout << -1 << endl;
			return;
		}
		swap(a[1] , b[0]);
		swap(b[2] , b[3]);
	}
	for(int i =0 ; i < n / 2 ; i++)
		cout << a[i] << " " << b[i] << endl;
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t = 1; 
    cin >> t; 
    while(t--) solve();
}  