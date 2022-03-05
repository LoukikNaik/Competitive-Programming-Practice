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

struct node {
    ll u;
    ll v;
    ll wt; 
    node(ll first, ll second, ll weight) {
        u = first;
        v = second;
        wt = weight;
    }
};

int main() {
    #ifndef ONLINE_JUDGE
    freopen("/Users/loukiknaik/Desktop/Contest/run/Error.txt", "w",stderr);
    freopen("/Users/loukiknaik/Desktop/Contest/run/input.txt","r",stdin);
    freopen("/Users/loukiknaik/Desktop/Contest/run/output1.txt","w",stdout);
    #endif
    fastio
    ll N,m;
    cin >> N >> m;
    vector<node> edges; 
    for(int i = 0;i<m;i++) {
        ll u, v, wt;
        cin >> u >> v >> wt; 
        // adj[u].pb(v);
        edges.push_back(node(u, v, wt)); 
    }

    ll src=1;
    ll inf = -1e17; 
    vector<ll> dist(N+1, inf); 
    vector<int> p (N+1, -1);

    dist[src] = 0; 

    for(ll i = 1;i<=N-1;i++) {
        for(auto it: edges) {
            if(dist[it.u] + it.wt > dist[it.v]) {
                dist[it.v] = dist[it.u] + it.wt; 
                p[it.v] = it.u;
            }
        }
        debug(dist)
    }

    int fl = 0; 
    for(auto it: edges) {
        if(dist[it.u] + it.wt > dist[it.v]) {
            dist[it.v]=-1e17;
            // cout << "-1"; 
        }
    }
    debug(dist)
    vector<ll> path;
    ll z=0;
    for (ll cur = N; cur != -1; cur = p[cur])
    {
        path.push_back (cur);
        z++;
        if(z>N)
        {
            fl=1;
            break;
        }
    }
    reverse (path.begin(), path.end());

    // cout << "Path from " << v << " to " << t << ": ";
    debug(path)
    if(fl!=1)
    for(auto c:path){
        if(dist[c]==-1e17)
        fl=1;
    }
    if(fl==1)
    cout<<-1<<"\n";
    else
    cout<<dist[N];
    cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl; 
    return 0;
}
