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
ll n,m;
vector<vector<ll>> dp(1e5+5,vector<ll>(103,-1)) ;
vector<ll> a;
ll recurse(ll i,ll k){
    if(i>=n)
    return 1;
    if(dp[i][k]!=-1)
    {
        // debug("hii")
        return dp[i][k];
    }
    if(a[i]!=0)
    {
        if(abs(a[i]-k)>1)
        return 0;
        return recurse(i+1,a[i]);
    }
    ll ans1=0,ans2=0,ans3=0;
    if(k+1<=m)
    ans1=recurse(i+1,k+1)%MOD;
    if(k-1>0)
    ans2=recurse(i+1,k-1)%MOD;
    if(k>0 && k<=m)
    ans3=recurse(i+1,k)%MOD;
    return dp[i][k]=(ans1+ans2+ans3)%MOD;
}
int main() {
    #ifndef ONLINE_JUDGE
    freopen("/Users/loukiknaik/Desktop/Contest/run/Error.txt", "w",stderr);
    freopen("/Users/loukiknaik/Desktop/Contest/run/input.txt","r",stdin);
    freopen("/Users/loukiknaik/Desktop/Contest/run/output1.txt","w",stdout);
    #endif
    fastio
    cin>>n>>m;
    a.resize(n);

    for(ll i=0;i<n;i++)
    cin>>a[i];
    ll ans;
    if(a[0]!=0){
        ans=recurse(1,a[0]);
        debug(ans)
    }
    else{
        ans=0;
        for(ll i=1;i<=m;i++){
            ans+=recurse(1,i)%MOD;
            debug(ans)
        }
    }
    cout<<ans%MOD<<"\n";
    cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl; 
    return 0;
}
