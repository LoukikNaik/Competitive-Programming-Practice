#include<bits/stdc++.h>
#include <stack>
#include <string>
#include <iostream>
#define ll long long
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

ll a[100005],seg[4*100005];
void build(ll ind, ll low, ll high){
    if(low==high)
    {
        seg[ind]=a[low];
        return;
    }
    ll mid=(low+high)/2;
    build(2*ind+1,low,mid);
    build(2*ind+2,mid+1,high);
    seg[ind]=max(seg[2*ind+1],seg[2*ind+2]);
}

ll query(ll ind, ll low, ll high, ll l ,ll r){
    if(low>=l && high<=r){
        return seg[ind];
    }
    if(high<l || low>r)return INT_MIN;
    ll mid=(low+high)/2;
    ll left=query(2*ind+1,low,mid,l,r);
    ll right=query(2*ind+2,mid+1,high,l,r);
    return max(left,right);
}

void update(ll ind, ll low, ll high, ll node, ll val){
    if(low==high)
    seg[low]=val;
    else{
        ll mid=(low+high)/2;
        if(low<=node && mid>=node)update(2*ind+1,low,mid,node,val);
        else update(2*ind+2,mid+1,high,node,val);
        seg[ind]=max(seg[2*ind+1],seg[2*ind+2]);
    }
}

using namespace std;
int main() {
fastio
    ll n;
    cin>>n;
    for(ll i=0;i<n;i++)
    cin>>a[i];
    build(0,0,n-1);
    ll q;
    cin>>q;
    while (q--)
    {
        /* code */
        ll l,r;
        cin>>l>>r;
        cout<<query(0,0,n-1,l,r);
    }
    
// your code goes here
return 0;
}