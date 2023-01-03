#include <bits/stdc++.h>
#define ll long long
using namespace std;


void solve(){
	int n ; cin >> n ;
	int a[n+1];
	for(int i = 1; i <= n ; i ++) {
		cin >> a[i];
	}
	sort(a +1, a+n+1);
	map<int , pair<int,int>> ma;
	for(int i= 1; i <= n ; i++){
		if(ma.count(a[i]) == 0){
			ma[a[i]].first = i ;
			ma[a[i]].second = i;
		}else ma[a[i]].second = i;
	}
	ll res =0 ;
	ll sum =0 ;
	ll l[n] , r[n];
	for(int i = 1; i <= n ; i++){
		l[i] = ma[a[i]].first;
		r[i] = ma[a[i]].second;
	}
	for(int i = 1; i <=n ; i++){
		res = max(res ,(l[i] - 1) * (n-r[i]) + (r[i] - l[i] + 1) * (l[i] - 1));
	}
	for(int i = 1 ;i <= n ; i++){
		sum = (r[i] - l[i] + 1)/2;
	}
	ll ans = max(res, sum);
	cout << ans << endl;
}


int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t = 1; 
    cin >> t; 
    while(t--) solve();
}  