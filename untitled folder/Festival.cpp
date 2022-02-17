#include<bits/stdc++.h>
#include <stack>
#include <string>
#include <iostream>
#define ll long long
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
int main() {
    #ifndef ONLINE_JUDGE
    freopen("Error.txt", "w",stderr);
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    fastio
    ll t,v1;
    cin>>t;
    v1=t;
    while(t--)
    {
        ll d,n,k,i,j,l,z,x,c;
        cin>>d>>n>>k;
        ll h[n],s[n],e[n];
        vector<ll> v;
        map<ll,ll> m,hs,he;
        for(i=0;i<n;i++)
        {
            cin>>h[i]>>s[i]>>e[i];
            hs[h[i]]=s[i];
            he[h[i]]=e[i];
        }
        sort(h,h+n);
        c=0;
        for(i=1;i<=d;i++)
        {
            l=i;
            z=0;
            x=0;
            for(j=n;j>=0;j--)
            {
                if(hs[h[j]]<=i && he[h[j]]>=i)
                {
                    z+=h[j];
                    x++;
                }
                if(x==k)
                {
                    break;
                }
            }
            c=max(c,z);
        }
        cout<<"Case #"<<v1-t<<": "<<c<<"\n";
    }
    return 0;
}
