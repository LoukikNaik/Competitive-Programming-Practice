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

vector<string> vec;
vector<vector<ll>> vis;
ll n,m,z;
void dfs(ll i, ll j){
    ll a,b,c,d;
    if(vis[i][j])
    return;
    vis[i][j]=1;
    if(i+1<n){
        if(vec[i+1][j]=='1' && vis[i+1][j]==0){
            z++;
            dfs(i+1,j);
        }
    }
    if(i-1>=0){
        if(vec[i-1][j]=='1' && vis[i-1][j]==0){
            z++;
            dfs(i-1,j);
        }
    }
    if(j+1<m){
        if(vec[i][j+1]=='1' && vis[i][j+1]==0){
            z++;
            dfs(i,j+1);
        }
    }
    if(j-1>=0){
        if(vec[i][j-1]=='1' && vis[i][j-1]==0){
            z++;
            dfs(i,j-1);
        }
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
        ll i,j,k,l;
        cin>>n>>m;
        vec.clear();
        vis.clear();
        vec.resize(n);
        vis.resize(n);
        for(i=0;i<n;i++){
            vector<ll> v;
            vis[i].resize(m);
            string s;
            cin>>s;
            vec[i]=s;
        }
        // debug(vis)
        vector<ll> v;
        for(i=0;i<n;i++){
            for(j=0;j<m;j++){
                if(vis[i][j])
                continue;
                if(vec[i][j]=='0')
                continue;
                z=1;
                dfs(i,j);
                debug(vis)
                v.push_back(z);
            }
        }
        debug(v)
        sort(all(v));
        j=0;
        l=0;
        for(i=v.size()-1;i>=0;i--){
            if(j%2==1)
            l+=v[i];
            j++;
        }
        cout<<l<<"\n";
        // debug(vec)
    }
    
    cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl; 
    return 0;
}
