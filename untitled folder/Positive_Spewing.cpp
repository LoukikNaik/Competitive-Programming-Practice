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
            ll n,k,i,j,l,m;
            cin>>n>>k;
            ll arr[n];
            l=0;
            vector<ll> vec,vec1;
            for(i=0;i<n;i++)
            {
                cin>>arr[i];
                vec1.push_back(arr[i]);
                if(arr[i]>0)
                {
                    vec.push_back(i);
                    l++;
                }
            }
            if(l==0)
            cout<<0<<"\n";
            else
            {
                
            }
        }
    return 0;
}
