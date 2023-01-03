#include <bits/stdc++.h>
#define ll long long
using namespace std;
const ll mxN = 1e3;
ll dp[mxN][mxN];
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        
        if(n==1)
        {
            cout<<1<<endl;
            cout<<1<<endl;
        }
        else{
            if(n%4==0)
        {
            cout<<n<<endl;
            for(ll i = 1 ;i  <= n ;i++) cout<<i<<" ";
        }
        else if(n%4==1)
        {
            cout<<n-1<<endl;
            for(ll i =1 ;i<=n-2;i++) cout<<i<<" ";
                cout<<n;
        }
        else if(n%4==2)
        {
            cout<<n-1<<endl;
            for(ll i = 2; i <=n;i++) cout<<i<<" ";
        }
        else if(n%4==3){
            cout<<n-1<<endl;
            for(ll i=1 ; i <=n-1;i++) cout<<i<<" ";
        }
        cout<<endl;
        }
        
    }
}
