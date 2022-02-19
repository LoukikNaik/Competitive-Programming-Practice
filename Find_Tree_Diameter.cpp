#include <bits/stdc++.h>
#include <string>
#include <iostream>
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define endl "\n"
 
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
vector<ll> adj[100005];
vector<ll> vis,lvl,e;
ll d=0,m1=0;
void dfs(int u,int p, int z){
    if(vis[u])
    return;
    vis[u]=1;
    lvl[u]=lvl[p]+1;
    if(lvl[u]>m1){
        m1=lvl[u];
        e[z]=u;
    }
    for(auto i:adj[u]){
        dfs(i,u,z);
    }
}

int main() {
    #ifndef ONLINE_JUDGE
    freopen("/Users/loukiknaik/Desktop/Contest/run/Error.txt", "w",stderr);
    freopen("/Users/loukiknaik/Desktop/Contest/run/input.txt","r",stdin);
    freopen("/Users/loukiknaik/Desktop/Contest/run/output.txt","w",stdout);
    #endif
    fastio
    ll t;
    cin>>t;
    while (t--)
    {
        ll n,i,j,k,l,u,v;
        cin>>n;
        l=n;
        e.push_back(0);
        e.push_back(0);
        vis.clear();
        lvl.clear();
        vis.resize(n+1);
        lvl.resize(n+1);
        // debug(vis)
        for(i=1;i<=n;i++)
        adj[i].clear();

        n--;
        while(n--){
            cin>>u>>v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        // for(i=1;i<=l;i++)
        // {
        //     debug(adj[i])
        // }
        m1=0;
        dfs(1,0,0);
        // debug(vis)
        debug(lvl)
        vis.clear();
        lvl.clear();
        vis.resize(l+1);
        lvl.resize(l+1);
        m1=0;
        dfs(e[0],0,1);
        debug(lvl)
        debug(e)
        cout<<lvl[e[1]]-1<<"\n";
        e.clear();
    }
    
    cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl; 
    return 0;
}
