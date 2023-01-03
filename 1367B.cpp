#include <bits/stdc++.h>
#define ll long long

using namespace std;
int main()
{
     ll t;
     cin>>t;
     while(t--)
     {
          ll n;
          cin>>n;
          ll c0a=0,c1a=0;
          ll c0b=0,c1b=0;
          ll count=0;
          ll a[n],b[n];
          for(ll i=0;i<n;i++) cin>>a[i];
          for(ll i=0;i<n;i++)
               {
                    b[i]=i%2;
                    if(b[i]==1) c1b++;
                    else if(b[i]==0) c0b++;
               }
          for(ll i=0;i<n;i++)
               {
                    a[i]%=2;
                    if(a[i]==1) c1a++;
                    else if(a[i]==0) c0a++;
               }
          for(ll i=0;i<n;i++)
               {
                    if(a[i]!=b[i]) count++;
               }
          //cout<<c1a<<"-"<<c1b<<" | "<<c0a<<"-"<<c0b<<endl;
          if(c1b==c1a && c0b==c0a && count !=0) cout<<count/2;
          else if(c1b==c1a && c0b==c0a && count==0) cout<<"0";
          else cout<<-1;
          cout<<endl;

     }
}
