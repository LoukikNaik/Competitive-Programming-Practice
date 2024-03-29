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
queue<ll> q;
vector<ll> d;
vector<ll> p;
vector<ll> adj[100000];
vector<ll> vis;
void addEdge(ll a, ll b)
{
    a--;
    b--;
    debug(a)
    debug(b)
    adj[a].pb(b);
    adj[b].pb(a);
}
int main() {
    #ifndef ONLINE_JUDGE
    freopen("Error.txt", "w",stderr);
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    fastio
    ll n,k,i,j,l,u,z;
    cin>>n>>k;
    p.resize(n);
    d.resize(n,0);
    vis.resize(n,0);
    while(k--)
    {
        cin>>i>>j;
        addEdge(i,j);
    }
    q.push(0);
    vis[0]=1;
    d[0]=0;
    k=0;
    while(!q.empty())
    {
        u=q.front();
        q.pop();
        l=adj[u].size();
        debug(adj[u])
        debug(vis)
        for(j=0;j<adj[u].size();j++)
        {
            z=adj[u][j];
            //debug(z)
            if(vis[z]==0)
            {
                vis[z]=1;
                q.push(z);
                //debug(z)
                d[z] = d[u] + 1;
                debug(d[u])
                p[z]=u;
            }
            if(z==n-1)
            {
                k=1;
                break;
            }
        }
    }
    if(k==0)
    cout<<"IMPOSSIBLE";
    else
    {
        cout<<d[n-1]+1<<"\n";
        l=d[n-1];
        vector<ll> vec;
        k=n-1;
        //cout<<n<<" ";
        vec.pb(n);
        while(l--)
        {
            //cout<<p[k]+1<<" ";
            vec.pb(p[k]+1);
            k=p[k];
        }
        for(i=vec.size()-1;i>=0;i--)
        {
            cout<<vec[i]<<" ";
        }
    }
    cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl; 
    return 0;
}
