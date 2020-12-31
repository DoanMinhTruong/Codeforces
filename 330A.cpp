#include<bits/stdc++.h>
#define ll long long
using namespace std;
bool row[11] ,col[11];
int main()
{
     int r,c;
     cin>>r>>c;
     vector<string> v(r);
     for(string&  i : v) cin>>i;
     for(int  i =0 ; i< r ;i++)
     {
          for(int j= 0; j<c;j++)
          {
               if(v[i][j] == 'S')
               {
                    row[i] = true;
                    col[j] = true;
               }
          }
     }
     int ans = 0;
     for(int i = 0 ; i< r;i++)
     {
          for(int j = 0; j< c;j++)
          {
               if(!col[j] || !row[i]) 
                    ans++;
          }
     }
     cout<<ans;
}
