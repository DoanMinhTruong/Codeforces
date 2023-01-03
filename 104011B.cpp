#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
	int a , b , c;  cin >> a >> b >> c ; 
	vector<pair<int,pair<int,int>>> ans = {
		{
			abs(a-abs(b* (a / b) + c*((a % b)/c))) , 
			{
				a/b , 
				(a % b , c)
			}
		},
		{
			abs(a-abs(b*(a / b))) , 
			{
				a/b ,
			 	0
			}
		},
		{
			abs(a-abs(c*(a / c))) , 
			{
				0, 
				a/c
			} 
		},
	};
	sort(ans.begin() , ans.end());
	cout << ans[0].second.first << " " << ans[0].second.second ;
	cout << endl;
	// for(auto i : ans) cout << i.first << endl;
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t = 1; 
    // cin >> t; 
    while(t--) solve();
}  