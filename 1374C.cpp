#include <bits/stdc++.h>
<<<<<<< HEAD
#define ll long long
using namespace std;

void solve(){
	int n ; string s;
	cin >> n >> s ;
	int cnt = 0;
	int ans = 0; 
	for(char i : s){
		if( i == '(') cnt += 1;
		else cnt -= 1;
		ans = max(ans , cnt >= 0 ? 0 : abs(cnt));
	}
	cout << ans << endl;
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t = 1; 
    cin >> t; 
    while(t--) solve();
}  
=======
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;string s;
        cin>>n>>s;
        int res = 0 ;
        int mx = -1;
        for(int  i =0 ; i < n ; i++){
            
            if(s[i] == ')')
                res++;
            else res--;
            mx = max(res ,mx);
        }
        cout<<mx<<endl;
    }
}
>>>>>>> 8b14d078839a41b0b1e5e21b94b5cdd69163adc0
