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
        while (t--)
        {
            ll n,i,j,k,l,z,y=0;
            cin>>n>>k;
            ll arr[n];
            for(i=0;i<n;i++)
            {
                cin>>arr[i];
                if(arr[i]==1)
                y++;
            }
            l=0;
            for(i=0;i<k;i++)
            {
                l+=arr[i];
            }
            z=l;
            for(i=1;i<n-k+1;i++)
            {
                l-=arr[i-1];
                l+=arr[i+k-1];
                if(l<z)
                z=l;
            }
            cout<<z*(z+1)/2+y-z<<"\n";
        }
        
    return 0;
}
