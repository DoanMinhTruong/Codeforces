#include <bits/stdc++.h>
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