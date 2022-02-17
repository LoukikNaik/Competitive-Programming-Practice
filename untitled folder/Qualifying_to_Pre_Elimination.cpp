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
            ll n,k,i,j,l;
            cin>>n>>l;
            vector<ll> vec;
            map<ll,ll> m;
            for(i=0;i<n;i++)
            {
                cin>>k;
                m[k]++;
                if(m[k]==1)
                vec.push_back(k);
            }
            sort(vec.begin(),vec.end());
            k=0;
            for(i=vec.size();i>=0;i--)
            {
                if(k<l)
                {
                    k+=m[vec[i]];
                }
                else
                break;
            }
            cout<<k<<"\n";
        }
    return 0;
}
