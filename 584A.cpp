<<<<<<< HEAD
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
	int n , t ; cin >> n >> t ;
	if(t < 10){
		for(int i = 0 ; i < n ; i++) cout << t ;
	}else{
		if(n == 1) cout << -1 ;
		else if(n == 2){
			cout << 10 ;
		}else{
			cout << 10 ; 
			for(int i = 0 ; i < n- 2; i++ ) cout << 0 ;
		}
	}

}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t = 1; 
    // cin >> t; 
    while(t--) solve();
}  
=======
#include <iostream>
using namespace std;

int main()
{
    int n, t, a(1);
    cin >> n >> t;

    if (n == 1 and t == 10)
        cout << -1 << endl;
    else
    {
        cout << t;
        if (t == 10) a++;
        for (a; a < n; a++)
            cout << '0';
    }

    return 0;
}
>>>>>>> 8b14d078839a41b0b1e5e21b94b5cdd69163adc0
