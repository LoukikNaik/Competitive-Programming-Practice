#include <bits/stdc++.h>
#include <string>
#include <iostream>
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define endl "\n"
 
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

vector<ll> vis,vis1;
vector<ll> adj[100000];
queue<ll> q;

void addEdge(ll a, ll b)
{
    a--;
    b--;
    debug(a)
    debug(b)
    adj[a].pb(b);
    adj[b].pb(a);
}
void dfs(ll v) {
    vis[v] = true;
    ll u;
    for (ll j=0;j<adj[v].size();j++) {
        u=adj[v][j];
        if (!vis[u])
            dfs(u);
    }
}

int main() {
    #ifndef ONLINE_JUDGE
    freopen("Error.txt", "w",stderr);
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    fastio
    ll n,e,i,j,l,m;
    cin>>n>>e;
    while(e--)
    {
        cin>>i>>j;
        addEdge(i,j);
    }    
    vis.resize(n,0);
    vector<ll> vec;
    for(i=0;i<n;i++)
    {
        if(vis[i]==0)
        {
            vec.pb(i);
            dfs(i);
        }
    }
    debug(vec)
    vis1.resize(n,0);
    //debug(vis1)
    l=vec.size();
    i=0;
    while(l--)
    {
        q.push(vec[i]);
        vis1[vec[i]]=1;
        while(!q.empty())
        {
            ll z=q.front();
            q.pop();
            debug(adj[z])
            for(j=0;j<adj[z].size();j++)
            {
                m=adj[z][j];
                debug(m)
                debug(vis1)
                if(vis1[m]==0)
                {
                    q.push(m);
                    if(vis1[z]==1)
                    vis1[m]=2;
                    else
                    vis1[m]=1;
                }
                else
                {
                    if(vis1[m]==vis1[z])
                    {
                        cout<<"IMPOSSIBLE\n";
                        exit(0);
                    }
                }
            }
        }
        i++;
    }
    debug(vis1)
    for(i=0;i<n;i++)
    cout<<vis1[i]<<" ";
    cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl; 
    return 0;
}
