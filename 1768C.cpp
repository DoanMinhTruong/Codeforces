#include <bits/stdc++.h>

using namespace std;

void solve(){
	int n ; cin >> n ; 
	int a[n] , b[n+1] , c[n+1], p[n] , q[n] , check = 0;
    for(int i =0 ; i < n ; i ++) cin >> a[i];
    memset(b,-1,sizeof b); 
    memset(c , -1 ,sizeof c); 
    memset(p , 0 ,sizeof p);
    memset(q , 0 ,sizeof q);
    set<int> s1 , s2 ; 
    for(int i = 0; i < n ; i ++){
        if(b[a[i]] == -1){
            b[a[i]] = i ;
            p[i] = a[i];
        }else if(c[a[i]] == -1){
            c[a[i]] = i ; 
            q[i] = a[i];
        }else check = 1; 
    }
    if(check){
        cout << "NO" << endl;
        return ;
    }
    for(int i =0  ; i < n ; i ++){
        if(b[i+1] == -1) s1.insert(i +1);
        if(c[i+1] == -1) s2.insert(i+1);
    }
    for(int i =0 ; i < n ; i++){
        if(p[i] == 0 ){
            auto it = s1.upper_bound(q[i]);
            if(it == s1.begin()){
                check = 1;
                break;
            }else{
                it--;
                p[i] = *it;
                s1.erase(it);
            }
        }else{
            auto it = s2.upper_bound(p[i]);
            if(it == s2.begin()){
                check = 1 ;
                break;
            }else{
                it--;
                q[i] = *it;
                s2.erase(it);
            }
        }
    }
    if(check) {
        cout << "NO" << endl;
        return;
    }
    cout << "YES"<< endl;
    for(int i =0 ; i < n ; i ++){
        cout << p[i] << " ";

    }
    cout << endl;
    for(int i =0 ;  i < n ; i ++){
        cout << q[i] << " ";
    }
    cout << endl;


}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t ; cin >> t;
    while(t--) solve();
}  