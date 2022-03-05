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
template <class T,class V> void _print(vector < vector < pair<T,V> > > v){cerr<<"["<<endl; {for(auto vec1:v){for(auto x:vec1){_print(x);cerr<<" ";}cerr<<endl;}}cerr<<"]";}


int main() {
    #ifndef ONLINE_JUDGE
    freopen("/Users/loukiknaik/Desktop/Contest/run/Error.txt", "w",stderr);
    freopen("/Users/loukiknaik/Desktop/Contest/run/input.txt","r",stdin);
    freopen("/Users/loukiknaik/Desktop/Contest/run/output1.txt","w",stdout);
    #endif
    fastio
    ll n,m,i,j,k;
    cin>>n>>m;
    vector<vector<pair<ll,ll>>> adj(n+1);
    vector<ll> vis(n+1);
    // map<pair<ll,ll>,ll> m1;
    // debug(adj)
    while (m--)
    {
        ll a,b,wt;
        cin>>a>>b>>wt;
        adj[a].pb(mp(b,wt));
        // if(m1[{a,b}]>wt || m1[{a,b}]==0){
        //     // adj[a].pb(mp(b,wt));
        //     m1[{a,b}]=wt;
        // }
        /* code */
    }
    // debug(m1)
    // for(auto ab:m1){
    //     adj[ab.ff.ff].pb(mp(ab.ff.ss,ab.ss));
    // }
    // debug(adj)

    ll source=1;
    priority_queue<pair<ll,ll>,vector<pair<ll,ll>>,greater<pair<ll,ll>>>pq;
    vector<ll> distTo(n+1,LLONG_MAX);
    distTo[source]=0;
    pq.push(mp(0,source));
    ll zm=0;
    while(!pq.empty()){
        // ll dist=pq.top().first;
        ll prev=pq.top().second;
        // s.insert(prev);
        pq.pop();
        if (vis[prev]) continue;
        vis[prev]=1;
        for(auto it:adj[prev]){
            ll next=it.first;
            ll nextDist=it.second;
            if(distTo[next]>distTo[prev]+nextDist)
            {
                distTo[next]=distTo[prev]+nextDist;
                pq.push(mp(distTo[next],next));
            }
        }
        zm+=1;
        
    }
    // cout<<s.size();
    debug(zm)
    for(i=1;i<=n;i++)
    cout<<distTo[i]<<" ";
    cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl; 
    return 0;
}
