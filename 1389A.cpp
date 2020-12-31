#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
     ll n;
     cin>>n;
     while(n--)
     {
          ll l,r;
          cin>>l>>r;
          if(l*2 >r )
          cout<<-1<<" "<<-1<<endl;
          else cout<<l<<" "<<l*2<<endl;
     }
}
