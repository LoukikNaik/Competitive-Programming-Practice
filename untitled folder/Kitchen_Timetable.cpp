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
            ll arr[n],b[n];
            vector<ll> vec;
            for(i=0;i<n;i++)
            {
                cin>>arr[i];
                if(i==0)
                vec.push_back(arr[i]);
                else
                vec.push_back(arr[i]-arr[i-1]);
            }
            k=0;
            for(i=0;i<n;i++)
            {
                cin>>b[i];
                if(vec[i]>=b[i])
                k++;
            }
            cout<<k<<"\n";
        }
    return 0;
}
