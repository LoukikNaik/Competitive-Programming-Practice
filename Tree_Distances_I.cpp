#include <bits/stdc++.h>
#include <string>
#include <iostream>
#define pb push_back
#define mp make_pair
#define rz resize
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

vector<vector<int>> adj;  // adjacency list representation
int n;  // number of nodes
int s,l=0,z,z1;  // source vertex

queue<int> q;
vector<bool> used;
vector<int> d1,d2,d;

void bfs(int s){
    q.push(s);
    used[s] = true;
    // p[s] = -1;
    while (!q.empty()) {
        int v = q.front();
        q.pop();
        for (int u : adj[v]) {
            if (!used[u]) {
                used[u] = true;
                q.push(u);
                d[u] = d[v] + 1;
                if(d[u]>l)
                {
                    l=d[u];
                    z=u;
                }
                // p[u] = v;
            }
        }
    }
}

void bfs1(int s){
    q.push(s);
    used[s] = true;
    // p[s] = -1;
    while (!q.empty()) {
        int v = q.front();
        q.pop();
        for (int u : adj[v]) {
            if (!used[u]) {
                used[u] = true;
                q.push(u);
                d1[u] = d1[v] + 1;
                if(d1[u]>l)
                {
                    l=d1[u];
                    z1=u;
                }
                // p[u] = v;
            }
        }
    }
}

void bfs2(int s){
    q.push(s);
    used[s] = true;
    // p[s] = -1;
    while (!q.empty()) {
        int v = q.front();
        q.pop();
        for (int u : adj[v]) {
            if (!used[u]) {
                used[u] = true;
                q.push(u);
                d2[u] = d2[v] + 1;
                // p[u] = v;
            }
        }
    }
}

int main() {
    #ifndef ONLINE_JUDGE
    freopen("/Users/loukiknaik/Desktop/Contest/run/Error.txt", "w",stderr);
    freopen("/Users/loukiknaik/Desktop/Contest/run/input.txt","r",stdin);
    freopen("/Users/loukiknaik/Desktop/Contest/run/output1.txt","w",stdout);
    #endif
    fastio
    cin>>n;
    adj.resize(n+1);
    d.resize(n+1);
    d1.rz(n+1);
    d2.rz(n+1);
    // p.resize(n+1);
    used.resize(n+1);
    for(int i=0;i<n-1;i++){
        int a,b;
        cin>>a>>b;
        adj[a].push_back(b);
        adj[b].pb(a);
    }
    bfs(1);
    debug(d)
    debug(z)
    used.clear();
    d.clear();
    used.resize(n+1);
    d.resize(n+1);
    l=0;
    used.clear();
    used.resize(n+1);
    bfs1(z);
    used.clear();
    used.resize(n+1);
    bfs2(z1);
    debug(d1)
    debug(d2)
    for(int i=1;i<=n;i++){
        cout<<max(d1[i],d2[i])<<" ";
    }
    cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl; 
    return 0;
}
