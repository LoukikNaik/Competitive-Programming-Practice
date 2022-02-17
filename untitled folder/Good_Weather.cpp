#include <bits/stdc++.h>
#include <string>
#include <iostream>
#define ll long long
 
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

using namespace std;

int main() {
    fastio
    ll t;
    cin>>t;
    while(t--)
    {
        ll z=0,k=0,l;
        for(ll i=0;i<7;i++)
        {
            cin>>l;
            if(l==1)
            k++;
            else
            z++;
        }
        if(k>z)
        cout<<"YES\n";
        else
        cout<<"NO\n";
    }
    return 0;
}
