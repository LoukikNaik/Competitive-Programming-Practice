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
ll gcd(ll a,ll b){if(a==0)return b; return gcd(b%a,a);}

ll power(ll x, unsigned int y){
    ll res = 1;
    x = x % MOD; 
    if (x == 0) return 0;
    while (y > 0){
        if (y & 1)res = (res*x) % MOD;
        y = y>>1;
        x = (x*x) % MOD;
    }
    return res;
}
ll ans=0;
vector<ll> visited;
vector<vector<ll>> adj;
// ll mc=0;
ll dfs(ll i,ll ans1, vector<ll> &F, vector<vector<ll>> &adj){
    if(visited[i]==1)return ans1;
    visited[i]=1;
    ans1=max(ans1,F[i]);
    for(auto x:adj[i]){
        if(visited[x]==1)continue;
        ans1=max(ans1,dfs(x,ans1,F,adj));
    }
    return ans1;
}
int main() {
    #ifndef ONLINE_JUDGE
    freopen("run/Error.txt", "w",stderr);
    freopen("run/input.txt","r",stdin);
    freopen("run/output1.txt","w",stdout);
    #endif
    fastio
    ll t,c;
    cin>>t;
    c=t;
    while (t--){
        cout<<"Case #"<<c-t<<": ";
        ll n,i,j,k,l,m;
        cin>>n;
        vector<ll> F(n+1);
        for(i=1;i<=n;i++)
        cin>>F[i];
        map<ll,ll> m1;
        vector<ll> initiators;
        adj.clear();
        adj.resize(n+1);
        for(i=1;i<=n;i++){
            cin>>k;
            adj[k].pb(i);
            if(adj[k].size()>1 && m1[k]==0){
                initiators.pb(k);
                m1[k]++;
            }
        }
        debug(F)
        for(i=0;i<=n;i++)
        {
            debug(adj[i])
        }
        debug(initiators);
        ans=0;
        visited.clear();
        visited.resize(n+1,0);
        sort(all(initiators));
        for(i=initiators.size()-1;i>=0;i--){
            k=initiators[i];
            vector<ll> values;
            ll z;
            for(j=0;j<adj[k].size();j++){
                z=dfs(adj[k][j],0,F,adj);
                values.pb(z);
            }
            debug(values)
            sort(all(values));
            F[k]=max(F[k],values[0]);
            // debug(F)
            for(j=1;j<values.size();j++){
                ans+=values[j];
            }
        }
        debug(visited)
        for(i=0;i<=n;i++){
            if(visited[i]==0){
                ll z=dfs(i,0,F,adj);
                ans+=z;
            }
        }
        debug(ans)
        debug("hii")
        cout<<ans<<"\n";
    }
    cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl; 
    return 0;
}
