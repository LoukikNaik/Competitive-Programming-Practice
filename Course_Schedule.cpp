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
template <class T, class V> void _print(pair <T, V> p) {cerr << "{"; _print(p.ff); cerr << ","; _print(p.ss); cerr << "}";}
template <class T> void _print(vector <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(set <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(multiset <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T, class V> void _print(map <T, V> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(vector < vector <T> > v){cerr<<"["<<endl; {for(vector<T> vec1:v){for(T x:vec1){cerr<<x<<" ";}cerr<<endl;}}cerr<<"]";}

vector<ll> adj[100005];
vector<ll> v;
vector<ll> vis;
ll recurse(ll n){
    ll l=1;
    if(vis[n]==1)
    return 1;
    for(auto k:adj[n]){
        if(vis[k])continue;
        l=l&recurse(k);
        v.pb(k);
    }
    // if(l==1)
    // vis[n]=1;
    return vis[n]=l;
}

int main() {
    #ifndef ONLINE_JUDGE
    freopen("/Users/loukiknaik/Desktop/Contest/run/Error.txt", "w",stderr);
    freopen("/Users/loukiknaik/Desktop/Contest/run/input.txt","r",stdin);
    freopen("/Users/loukiknaik/Desktop/Contest/run/output1.txt","w",stdout);
    #endif
    fastio
    ll n,k,i,j,l,m;
    cin>>n>>k;
    // for(i=1;i<=n;i++)
    // adj[i].resize(n+1);
    while (k--)
    {
        ll a,b;
        cin>>a>>b;
        adj[b].pb(a);
    }
    vis.resize(n+1);
    for(i=1;i<=n;i++)
    {
        if(adj[i].size()==0)
        {
            vis[i]=1;
            v.pb(i);
        }
    }
    debug(vis)
    l=1;
    for(i=1;i<=n;i++){
        if(vis[i])continue;
        l=l&recurse(i);
        v.pb(i);
    }
    debug(v)
    if(l==1)
    {
        for(auto c:v)
        cout<<c<<" ";
    }
    else
    cout<<"IMPOSSIBLE\n";
    
    cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl; 
    return 0;
}
