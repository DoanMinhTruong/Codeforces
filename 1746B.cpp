#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
	int n ; cin >> n ;
	vector<int> a(n);
	int c0 = 0, c1 = 0 ;
	for(int &i : a) {
		cin >> i ;
		c0 += i == 0;
	}
	int ans = c0 ;
	// printf("ans: %d , c0: %d , c1: %d\n" , ans , c0 ,c1);
	for(int i : a){
		c1 += i==1;
		c0 -= i==0;
		ans = min(ans , max(c0 , c1));
		// printf("ans: %d , c0: %d , c1: %d\n" , ans , c0 ,c1);

	}
	cout << ans << endl;

}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t = 1; 
    cin >> t; 
    while(t--) solve();
}  