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

vector<ll> vis,d1;
vector<ll> adj[100005];
vector<ll> a(100005),p(100005);

void search(ll i,ll max1, ll min1){
    d1.push_back(max1-a[i]);
    if(min1!=INT_MAX)
    d1.push_back(min1-a[i]);
    max1=max(max1,a[i]);
    min1=min(min1,a[i]);
    if(adj[i].size()==0)
    return;
    for(auto a:adj[i]){
        search(a,max1,min1);
    }
}
int main() {
    #ifndef ONLINE_JUDGE
    freopen("/Users/loukiknaik/Desktop/Contest/run/Error.txt", "w",stderr);
    freopen("/Users/loukiknaik/Desktop/Contest/run/input.txt","r",stdin);
    freopen("/Users/loukiknaik/Desktop/Contest/run/output.txt","w",stdout);
    #endif
    fastio
    ll n,i,l,j,k,m;
    cin>>n;
    vis.resize(n);
    for(i=1;i<=n;i++){
        cin>>a[i];
    }
    for(i=0;i<n;i++){
        cin>>p[i];
    }
    // vector<ll> adj[n+1];
    ll parent=0;
    for(i=1;i<=n;i++){
        if(p[i-1]!=-1){
            adj[p[i-1]].push_back(i);
        }
        else{
            parent=i;
        }
    }
    debug(parent)
    search(parent,0,INT_MAX);
    // debug(adj[i])
    // for(i=1;i<=n;i++)
    // {
    //     for(auto u:adj[i])
    //     cout<<u<<" ";
    //     cout<<"\n";
    // }
    sort(all(d1));
    cout<<d1[d1.size()-1];
    
    
    cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl; 
    return 0;
}
