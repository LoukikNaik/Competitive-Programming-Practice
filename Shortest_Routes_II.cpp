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


int main() {
    #ifndef ONLINE_JUDGE
    freopen("/Users/loukiknaik/Desktop/Contest/run/Error.txt", "w",stderr);
    freopen("/Users/loukiknaik/Desktop/Contest/run/input.txt","r",stdin);
    freopen("/Users/loukiknaik/Desktop/Contest/run/output1.txt","w",stdout);
    #endif
    fastio
    ll n,m,q,i,j,k,l;
    cin>>n>>m>>q;
    vector<vector<pair<ll,ll>>> adj(n+1);
    vector<vector<ll>> dp(n+1,vector<ll>(n+1,-1));
    map<pair<ll,ll>,ll> m2;
    for(i=0;i<m;i++){
        ll a,b,c;
        cin>>a>>b>>c;
        // adj[a].pb({b,c});
        // adj[b].pb({a,c});
        if(m2[{a,b}]==0 || m2[{a,b}]>c)
        m2[{a,b}]=c;
        // if(m2[{b,a}]==0 || m2[{b,a}]>c)
        // m2[{b,a}]=c;
    }
    for(auto z:m2)
    {
        // debug(z)
        adj[z.ff.ff].pb(mp(z.ff.ss,z.ss));
        adj[z.ff.ss].pb(mp(z.ff.ff,z.ss));
    }
    // debug(adj)
    for(i=1;i<=n;i++){
        ll source=i;
        priority_queue<pair<ll,ll>,vector<pair<ll,ll>>,greater<pair<ll,ll>>>pq;
        vector<ll> distTo(n+1,1e18);
        vector<ll> vis(n+1);
        distTo[source]=0;
        dp[i][source]=distTo[source];
        pq.push(mp(0,source));
        while(!pq.empty()){
            ll dist=pq.top().first;
            ll prev=pq.top().second;
            pq.pop();
            if (vis[prev]) continue;
            vis[prev]=1;
            for(auto it:adj[prev]){
                ll next=it.first;
                ll nextDist=it.second;
                if(distTo[next]>dist+nextDist)
                {
                    distTo[next]=dist+nextDist;
                    dp[i][next]=distTo[next];
                    dp[next][i]=dp[i][next];
                    pq.push(mp(distTo[next],next));
                }
            }
        }
    }
    // debug(dp)
    while(q--){
        ll x,y;
        cin>>x>>y;
        cout<<dp[x][y]<<"\n";
    }
    cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl; 
    return 0;
}
