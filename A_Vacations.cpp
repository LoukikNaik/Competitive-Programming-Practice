#include <bits/stdc++.h>
#include <string>
#include <iostream>
#define pb push_back
#define mp make_pair
#define ff first
#define rz resize
#define ss second
#define endl "\n"
 
#define MOD 1000000007
#define all(x) (x).begin(),(x).end()
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
typedef long long ll;
typedef unsigned long long ull;
typedef long double lld;

using namespace std;

#ifndef ONLINE_JUDGE
#define debug(x) cerr<< #x <<" "; _print(x); cerr<<endl;
#else
#define debug(x)
#endif

template <class T> void _print(T t) { cerr << t;}
template <class T, class V> void _print(pair <T, V> p);
template <class T> void _print(vector <T> v);
template <class T> void _print(set <T> v);
template <class T, class V> void _print(map <T, V> v);
template <class T> void _print(multiset <T> v);
template <class T> void _print(stack <T> v);
template <class T> void _print(stack <T> v) {cerr << "[ "; while(!v.empty()) {_print(v.top());v.pop(); cerr << " ";} cerr << "]";}
template <class T, class V> void _print(pair <T, V> p) {cerr << "{"; _print(p.ff); cerr << ","; _print(p.ss); cerr << "}";}
template <class T> void _print(vector <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(set <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(multiset <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T, class V> void _print(map <T, V> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(vector < vector <T> > v){cerr<<"["<<endl; {for(vector<T> vec1:v){for(T x:vec1){cerr<<x<<" ";}cerr<<endl;}}cerr<<"]";}
ll gcd(ll a,ll b){if(a==0)return b; return gcd(b%a,a);}

ll power(ll x, unsigned int y){
    ll res = 1;
    x = x % MOD; 
    if (x == 0) return 0;
    while (y > 0){
        if (y & 1)res = (res*x) % MOD;
        y = y>>1;
        x = (x*x) % MOD;
    }
    return res;
}
ll n;
vector<ll> a;
vector<vector<ll>> dp;
ll recurse(ll i,ll prev){
    if(i==n)
    return 0;
    if(dp[i][prev]!=-1)
    {
        debug("hii")
        return dp[i][prev];
    }
    ll ans=INT_MAX;
    if(prev==0){
        // if(a[i]==0)
        ans=min(ans,1+recurse(i+1,0));
        if(a[i]==1){
            // ans=min(ans,1+recurse(i+1,0));
            ans=min(ans,recurse(i+1,1));
        }
        if(a[i]==2)
        {
            // ans=min(ans,1+recurse(i+1,0));
            ans=min(ans,recurse(i+1,2));
        }
        if(a[i]==3){
            // ans=min(ans,1+recurse(i+1,0));
            ans=min(ans,recurse(i+1,1));
            ans=min(ans,recurse(i+1,2));
        }
    }
    if(prev==1){
        if(a[i]==1 || a[i]==0){
            ans=min(ans,1+recurse(i+1,0));
        }
        else{
            ans=min(ans,1+recurse(i+1,0));
            ans=min(ans,recurse(i+1,2));
        }
    }
    if(prev==2){
        if(a[i]==2 || a[i]==0){
            ans=min(ans,1+recurse(i+1,0));
        }
        else{
            ans=min(ans,1+recurse(i+1,0));
            ans=min(ans,recurse(i+1,1));
        }
    }
    if(prev==4){
        // if(a[i]==0)
        ans=min(ans,1+recurse(i+1,0));
        if(a[i]==1){
            // ans=min(ans,1+recurse(i+1,0));
            ans=min(ans,recurse(i+1,1));
        }
        if(a[i]==2)
        {
            // ans=min(ans,1+recurse(i+1,0));
            ans=min(ans,recurse(i+1,2));
        }
        if(a[i]==3){
            // ans=min(ans,1+recurse(i+1,0));
            ans=min(ans,recurse(i+1,1));
            ans=min(ans,recurse(i+1,2));
        }
    }
    // debug(ans)
    return dp[i][prev]=ans;
}

int main() {
    #ifndef ONLINE_JUDGE
    freopen("/Users/loukiknaik/Desktop/Contest/run/Error.txt", "w",stderr);
    freopen("/Users/loukiknaik/Desktop/Contest/run/input.txt","r",stdin);
    freopen("/Users/loukiknaik/Desktop/Contest/run/output1.txt","w",stdout);
    #endif
    fastio
    ll i,j,l,m;
    cin>>n;
    a.resize(n);
    dp.resize(n);
    for(i=0;i<n;i++)
    {
        dp[i].resize(5,-1);
        cin>>a[i];
    }
    debug(a)
    cout<<recurse(0,4);
    cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl; 
    return 0;
}
