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
        while (t--)
        {
            ll n,i,j,k,l;
            cin>>n;
            ll arr[n];
            for(i=0;i<n;i++)
            {
                cin>>arr[i];
            }
            if(n%2==0)
            cout<<"no\n";
            else{
                for(i=0;i<n/2;i++)
                {
                    k=0;
                    if(arr[i]==arr[n-i-1] && arr[i]==i+1)
                    continue;
                    else
                    {
                        k=1;
                        break;
                    }
                }
                if(k==1)
                {
                    cout<<"no\n";
                    continue;
                }
                if(k==0 && arr[i]==i+1)
                {
                    cout<<"yes\n";
                }
                else
                cout<<"no\n";
            }
        }
        
    return 0;
}
