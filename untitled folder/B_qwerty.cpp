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
        string str="abcdefghijklmnopqrstuvwxyz";
        ll n,i,j,k,l;
        for(i=0;i<26;i++)
        {
            cin>>k;
            cout<<str[k-1];
        }
    return 0;
}
