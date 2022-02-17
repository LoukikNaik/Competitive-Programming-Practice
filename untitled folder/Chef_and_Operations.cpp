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
            ll n,i,j,k,l,m;
            cin>>n;
            ll a[n],b[n];
            for(i=0;i<n;i++)
            cin>>a[i];
            for(i=0;i<n;i++)
            cin>>b[i];
            k=0;
            for(i=0;i<n-2;i++)
            {
                if(a[i]>b[i])
                {
                    k=1;
                    break;
                }
                else if(a[i]<b[i])
                {
                    l=b[i]-a[i];
                    a[i]+=l;
                    a[i+1]+=l*2;
                    a[i+2]+=l*3;
                }
            }
            if(a[i]!=b[i] || a[i+1]!=b[i+1])
            k=1;
            // for(i=0;i<n;i++)
            // cout<<a[i]<<" ";
            // cout<<"\n";
            if(k==1)
            cout<<"NIE\n";
            else
            cout<<"TAK\n";

        }
    return 0;
}
