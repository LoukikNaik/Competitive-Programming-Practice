#include<bits/stdc++.h>
#include <stack>
#include <string>
#include <iostream>
#define ll long long
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
int main() {
fastio
    ll n;
    vector<ll> prime(n+1,1);
    prime[1]=0;
    for(ll i=2;i<=n;i++){
        if(!prime[i])continue;
        for(ll j=i*i;j<=n;j+=i)
        prime[j]=0;
    }
// your code goes here
return 0;
}