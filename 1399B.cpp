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
          ll a[n],b[n],c[n],d[n];
          memset(c,0,n);
          memset(d,0,n);

          for(ll i=0;i<n;i++) cin>>a[i];
          for(ll i=0;i<n;i++) cin>>b[i];
          ll mina=a[0],minb=b[0];
          for(ll i=1;i<n;i++)
               if(a[i]< mina) mina=a[i];
          for(ll i=1;i<n;i++)
               if(b[i]< minb) minb=b[i];
          ll count=0;
          for(ll i=0;i<n;i++)
          {
               if(a[i]==mina)
               c[i]=1;
               if(b[i]==minb)
               d[i]=1;
          }
          for(ll i=0;i<n;i++)
          {
               if(a[i]!=mina && b[i] != minb)
               {
                    count+=max(a[i]-mina,b[i]-minb);
               }
               else{
                    if(a[i]==mina && b[i]!=minb)
                    {
                         count+=b[i]-minb;
                    }
                    else if(b[i]==minb && a[i]!=mina)
                    {
                         count+=a[i]-mina;
                    }
               }
               
          }
          cout<<count<<endl;
     }
}
