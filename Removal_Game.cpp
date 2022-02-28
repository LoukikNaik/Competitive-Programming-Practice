#include <bits/stdc++.h>
#include <string>
#include <iostream>
#define pb push_back
#define mp make_pair
#define ff first
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

void _print(ll t) {cerr << t;}
void _print(int t) {cerr << t;}
void _print(string t) {cerr << t;}
void _print(char t) {cerr << t;}
void _print(lld t) {cerr << t;}
void _print(double t) {cerr << t;}
void _print(ull t) {cerr << t;}

template <class T, class V> void _print(pair <T, V> p);
template <class T> void _print(vector <T> v);
template <class T> void _print(set <T> v);
template <class T, class V> void _print(map <T, V> v);
template <class T> void _print(multiset <T> v);
template <class T, class V> void _print(pair <T, V> p) {cerr << "{"; _print(p.ff); cerr << ","; _print(p.ss); cerr << "}";}
template <class T> void _print(vector <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(set <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(multiset <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T, class V> void _print(map <T, V> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(vector < vector <T> > v){cerr<<"["<<endl; {for(vector<T> vec1:v){for(T x:vec1){cerr<<x<<" ";}cerr<<endl;}}cerr<<"]";}

vector<vector<ll>> dp;
vector<ll> a;
ll z;
ll xc=0;
ll recurse(ll n,ll m){
    // if(n<0 || m<0 || n>=z || m>=z)
    // return 0;
    if(n==m)
    return a[n];
    if(n==m+1){
        return dp[n][m]=max(a[n],a[m]);
    }
    if(n==m-1){
        return dp[n][m]=max(a[n],a[m]);
    }
    if(dp[n][m]!=INT_MAX)
    {
        // debug("hoo")
        xc+=1;
        return dp[n][m];
    }
    ll ans1,ans2,ans,z,x,y;
    z=recurse(n+1,m-1);
    x=recurse(n+2,m);
    y=recurse(n,m-2);
    ans1=min(a[n]+z,a[n]+x);
    ans2=min(a[m]+y,a[m]+z);
    ans=max(ans1,ans2);
    return dp[n][m]=ans;
}
int main() {
    #ifndef ONLINE_JUDGE
    freopen("/Users/loukiknaik/Desktop/Contest/run/Error.txt", "w",stderr);
    freopen("/Users/loukiknaik/Desktop/Contest/run/input.txt","r",stdin);
    freopen("/Users/loukiknaik/Desktop/Contest/run/output1.txt","w",stdout);
    #endif
    fastio
    ll n,i,j,k,l,m;
    cin>>n;
    z=n;
    a.resize(n);
    dp.resize(n);
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        dp[i].resize(n,INT_MAX);
    }
    // debug(a)
    // debuzg(dp)
    l=recurse(0,n-1);
    debug(l)
    cout<<l;
    // debug(dp);
    debug(xc)
    cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl; 
    return 0;
}
