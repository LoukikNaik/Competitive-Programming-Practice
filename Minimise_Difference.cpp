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
       ll n,i,j,k,l,m,a,b;
       cin>>n;
       cin>>m;
       vector<ll> adj[n+1];
       while(m--)
       {
           cin>>a>>b;
           adj[a].pb(b);
           adj[b].pb(a);
       }
       vector<pair<ll,ll>> vec;
       for(i=1;i<=n;i++)
       {
           l=adj[i].size();
           //debug(l)
           vec.pb(mp(l,i));
       }
       sort(vec.begin(),vec.end());
       j=1;
       map<ll,ll> m1;
       set<ll> s;
       for(i=n-1;i>=0;i--)
       {
           k=vec[i].first;
           l=vec[i].second;
           m1[l]=j;
           ll y=0;
           for(ll z=0;z<adj[l].size();z++)
           {
               debug(adj[l][z])
               debug(m1[adj[l][z]])
               if(m1[adj[l][z]]!=0)
               {
                   if(m1[adj[l][z]]<j)
                   y++;
               }
           }
           debug(y)
           s.insert(y);
           j++;
       } 
       set<ll>::iterator it=s.end();
       it--;
       cout<<(*it-*s.begin())<<"\n";
       for(i=1;i<=n;i++)
       cout<<m1[i]<<" ";
       cout<<"\n";
    }
    
    
    cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl; 
    return 0;
}
