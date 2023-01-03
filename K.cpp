#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int n ; cin >> n ;
    vector<int> a(n);
    for(int &i :a) cin >> i ;
    int y , z ; cin >> y >> z;
	vector<int> b(n);
	int ans = 0; 
	for(int i = 0 ; i < n ; i ++){
			b[i] = (abs(a[i] - z)) ; 
	}
	sort(b.begin()  , b.end());
	y = abs(z - y ) ;
	int i = 0 ; 
	
	while(i < n ){
		if(b[i] < y) {
			ans ++ ;
			i++;
			y -= b[i];
		} else break;
	}
	cout << ans << endl;
}  