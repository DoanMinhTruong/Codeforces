#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    string s;
    cin >> n >> s;
    vector<char> v;
    for(char i : s){
        if(v.empty()){
            v.push_back(i);
            continue;
        }
        if(v.back() != i){
            v.push_back(i);
        }
    }
    for(int i = 0 ; i < v.size(); i++){
        for(int j = i + 1; j < v.size(); j++){
            if(v[i] == v[j]){
                cout<<"NO\n";
                return;
            }
        }
    }
    cout<<"YES\n";
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}