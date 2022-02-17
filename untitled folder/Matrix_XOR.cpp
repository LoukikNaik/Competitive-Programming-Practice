#include <bits/stdc++.h>
#include <string>
#include <iostream>
#define ll long long
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
int main() {
    // #ifndef ONLINE_JUDGE
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    // #endif
    fastio
        ll t;
        cin>>t;
        while(t--)
        {
            ll n,m,i,j,k,l;
            cin>>n>>m>>k;
            j=0;
            for(i=2;i<=1+m;i++)
            {
                l=min(i-2+1,n);
                if(l%2!=0)
                j=j^(k+i);
            }
            for(i=2+m;i<=n+m;i++)
            {
                l=min(n+m-i+1,m);
                if(l%2!=0)
                j=j^(k+i);
            }
            cout<<j<<"\n";
        }
    return 0;
}
