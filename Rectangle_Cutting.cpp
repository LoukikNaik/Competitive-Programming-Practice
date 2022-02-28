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
vector<vector<ll>> dp;
ll mc=0;
ll recurse(ll a,ll b){
    if(a==b)
    return 0;
    if(dp[a][b]!=-1)
    {
        mc+=1;
        return dp[a][b];
    }
    if(dp[b][a]!=-1)
    {
        mc+=1;
        return dp[b][a];
    }
    ll ans=INT_MAX;
    for(int k=1;k<a;k++){
        ans=min(ans,1+recurse(k,b)+recurse(a-k,b));
    }
    for(int k=1;k<b;k++){
        ans=min(ans,1+recurse(a,k)+recurse(a,b-k));
    }
    dp[b][a]=ans;
    return dp[a][b]=ans;
}

int main() {
    #ifndef ONLINE_JUDGE
    freopen("/Users/loukiknaik/Desktop/Contest/run/Error.txt", "w",stderr);
    freopen("/Users/loukiknaik/Desktop/Contest/run/input.txt","r",stdin);
    freopen("/Users/loukiknaik/Desktop/Contest/run/output1.txt","w",stdout);
    #endif
    fastio
    ll a,b,i,j,k;
    cin>>a>>b;
    dp.resize(max(a,b)+1);
    for(i=0;i<=max(a,b);i++){
        dp[i].resize(max(a,b)+1,-1);
    }
    cout<<recurse(a,b);
    debug(mc)
    cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl; 
    return 0;
}
// 1 1 1 1
// 1 1 1 1
// 1 1 1 1
// 1 1 1 1
// 1 1 1 1
// 1 1 1 1 