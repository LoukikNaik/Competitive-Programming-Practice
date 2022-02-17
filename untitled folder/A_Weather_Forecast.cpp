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
        ll n;
        cin>>n;
        string str;
        cin>>str;
        if(str[n-1]=='o')
        cout<<"Yes\n";
        else
        cout<<"No\n";
    return 0;
}
