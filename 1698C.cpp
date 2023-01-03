#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
	int n ; cin >> n ;
	vector<int> a(n);
	for(int& i : a) cin >> i ;
	sort(a.begin() , a.end());
	int negative = 0 , positive = 0 , zeros = 0 ;
	for(int i : a){
		negative += i < 0 ;
		positive += i > 0 ;
		zeros += i == 0 ;
	}
	if(negative >= 3 || positive >= 3){
		cout << "NO" << endl;
		return ;
	}
	a.erase(remove(a.begin() , a.end() , 0) , a.end());
	zeros = min(zeros , 3) ; 
	for(int i =0 ; i < zeros ; i++) a.push_back(0);
	sort(a.begin() , a.end());
	n = int(a.size());
	bool closed = true;
	for(int i = 0 ; i < n ; i ++){
		for(int j = i + 1; j < n ; j++){
			for(int k = j + 1; k < n ; k ++){
				if(!binary_search(a.begin() , a.end() , a[i] + a[j] + a[k]))
					closed = false;
			}
		}
	}
	cout << (closed ? "YES" : "NO") << endl;
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t = 1; 
    cin >> t; 
    while(t--) solve();
}  