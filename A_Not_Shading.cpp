#include<bits/stdc++.h>
#define ll long long
#define ull unsigned long long
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);cout.tie(0);
   int t;cin>>t;
   while(t--){
    ll n,m,r,c;
    cin>>n>>m>>r>>c;
    char a[n][m];
   int d=0,ans=0;
   for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++) {
            
            cin>>a[i][j];
            if(a[i][j]=='B'){
              d++;
            }
        }
    }

    if(d==0){
      cout<<-1<<endl;
    }
    else{
      if(a[r-1][c-1]=='B'){
        cout<<0<<endl;
      }
      else{
          r--;
          c--;
          for(int i=0;i<n;i++)if(a[i][c]=='B'){ans++;break;}
          for(int i=0;i<m;i++)if(a[r][i]=='B'){ans++;break;}
          if(!ans){
            cout<<2<<endl;
          }else{
            cout<<1<<endl;
          }
      }
   }
  }
  return 0;
  
}