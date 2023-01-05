#include <bits/stdc++.h>

using namespace std;

class dsu {
 public:
  vector<int> p;
  int n;
 
  dsu(int _n) : n(_n) {
    p.resize(n);
    iota(p.begin(), p.end(), 0);
  }
 
  inline int get(int x) {
    return (x == p[x] ? x : (p[x] = get(p[x])));
  }
 
  inline bool unite(int x, int y) {
    x = get(x);
    y = get(y);
    if (x != y) {
      p[x] = y;
      return true;
    }
    return false;
  }
};

void solve(){
	int n; cin >> n ;
	vector<int> a(n);
	for(int& i : a){
		int x; cin >> x ; 
		i = x - 1; 
	}
	dsu d(n);
	int ans = 1 ;
	for(int i =0 ; i < n ; i ++){
		if(d.unite(i , a[i])){
			ans ++ ;
		}
	}
	for(int i =0 ; i < n - 1 ; i ++){
		if(d.get(i) == d.get(i + 1)) {
			ans -= 2 ;  break;
		}
	}
	cout << ans << endl;
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t; cin >> t;
    while(t--) solve();
}  