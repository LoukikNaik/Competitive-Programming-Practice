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

ll n;
vector< vector< ll > > adj;
vector<ll> vis;
vector<ll> connected;
void dfs(int z){
    vis[z]=1;
    if(z<n){
        connected.push_back(z);
    }
    for(auto x:adj[z]){
        if(vis[x])
        continue;
        dfs(x);
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
        /* code */
        ll i,j,k,l,m;
        cin>>n;
        // debug(n)
        vis.clear();
        adj.clear();
        adj.resize(n+32);
        vis.resize(n+32);
        // debug(adj)
        // debug(vis)
        vector<ll> vec(n),vec1(n);
        for(i=0;i<n;i++){
            cin>>vec[i];
            vec1[i]=vec[i];
            for(j=0;j<31;j++){
                if(vec[i]>>j & 1){
                    adj[i].push_back(n+j);
                    adj[n+j].push_back(i);
                }
            }
        }

        // debug(adj)
        // debug(vis)
        for(i=0;i<n;i++){
            if(vis[i])
            continue;
            dfs(i);
            vector<ll> tmp=connected;
            debug(connected)
            sort(tmp.begin(),tmp.end());
            vector<ll> v;
            for(auto k:tmp){
                v.push_back(vec1[k]);
            }
            sort(v.begin(),v.end());
            m=0;
            for(auto k:tmp){
                vec[k]=v[m];
                m++;
            }
            connected.clear();
        }
        m=0;
        for(i=1;i<vec.size();i++){
            if(vec[i]<vec[i-1]){
                m=1;
                break;
            }
        }
        if(m==1)
        cout<<"No\n";
        else
        cout<<"Yes\n";
    }
    
    cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl; 
    return 0;
}
