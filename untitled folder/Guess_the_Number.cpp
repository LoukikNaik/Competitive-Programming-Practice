#include <bits/stdc++.h>
#include <string>
#include <iostream>
#define ll long long
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
int main() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    fastio
       ll t;
       cin>>t;
       while(t--)
       {
           ll n,i,j,k,l;
           cin>>n;
           for(i=1;i*i<=n;i++)
           {
               cout<<i*i<<"\n";
               cin>>k;
               if(k==1)
               {
                   break;
               }
           }
       } 
    return 0;
}
