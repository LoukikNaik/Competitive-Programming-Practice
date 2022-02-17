#include<bits/stdc++.h>
#include <stack>
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
    ll n,i,j,k,l,m;
    ll arr[3],d;
    cin>>arr[0]>>arr[1]>>arr[2]>>d;
    sort(arr,arr+3);
    if(arr[0]+arr[1]+arr[2]<=d)
    cout<<1<<"\n";
    else if(arr[0]+arr[1]<=d)
    cout<<2<<"\n";
    else
    cout<<3<<"\n";
}
// your code goes here
return 0;
}