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
        ll n,i,j,k,l=0,m,c=INT_MAX;
        cin>>n>>m;
        vector<vector<ll>> adj,d;
        vector<pair<ll,ll>> vec;
        adj.resize(n);
        d.resize(n);
        for(i=0;i<n;i++){
            adj[i].resize(m);
            d[i].resize(m,INT_MAX);
            for(j=0;j<m;j++){
                cin>>adj[i][j];
                l=max(l,adj[i][j]);
                c=min(c,adj[i][j]);
                // cerr<<adj[i][j]<<" ";
            }
            // cerr<<"\n";
        }
        if(l==c){
            cout<<0<<"\n";
            continue;
        }
        queue<pair<ll,ll>> q;
        for(i=0;i<n;i++){
            for(j=0;j<m;j++){
                if(adj[i][j]==l){
                    d[i][j]=0;
                    vec.push_back(make_pair(i,j));
                    q.push({i,j});
                }
            }
        }
        // for(auto z:vec){
            // queue<pair<ll,ll>> q;
            // while (!q.empty()) {
            //     int v = q.front();
            //     q.pop();
            //     for (int u : adj[v]) {
            //         if (!used[u]) {
            //             used[u] = true;
            //             q.push(u);
            //             d[u] = d[v] + 1;
            //             p[u] = v;
            //         }
            //     }
            // }
            vector<vector<int> > vis( n , vector<int> (m, 0));
            // vis[z.first][z.second]=1;
            while(!q.empty()){
                pair<ll,ll> p=q.front();
                q.pop();
                i=p.first;
                j=p.second;
                if(i+1<n){
                    if(!vis[i+1][j] && adj[i+1][j]!=l){
                        vis[i+1][j]=1;
                        if(d[i+1][j]>=d[i][j]+1){
                            q.push(make_pair(i+1,j));
                            d[i+1][j]=d[i][j]+1;
                        }
                    }
                }
                if(i-1>=0){
                    if(!vis[i-1][j] && adj[i-1][j]!=l){
                        vis[i-1][j]=1;
                        // q.push(make_pair(i-1,j));
                        // d[i-1][j]=min(d[i-1][j],d[i][j]+1);
                        if(d[i-1][j]>=d[i][j]+1){
                            q.push(make_pair(i-1,j));
                            d[i-1][j]=d[i][j]+1;
                        }
                    }
                }
                if(j+1<m){
                    if(!vis[i][j+1] && adj[i][j+1]!=l){
                        vis[i][j+1]=1;
                        // q.push(make_pair(i,j+1));
                        // d[i][j+1]=min(d[i][j+1],d[i][j]+1);
                        if(d[i][j+1]>=d[i][j]+1){
                            q.push(make_pair(i,j+1));
                            d[i][j+1]=d[i][j]+1;
                        }
                    }
                }
                if(j-1>=0){
                    if(!vis[i][j-1] && adj[i][j-1]!=l){
                        vis[i][j-1]=1;
                        // q.push(make_pair(i,j-1));
                        // d[i][j-1]=min(d[i][j-1],d[i][j]+1);
                        if(d[i][j-1]>=d[i][j]+1){
                            q.push(make_pair(i,j-1));
                            d[i][j-1]=d[i][j]+1;
                        }
                    }
                }
                if(i+1<n){
                    if(j+1<m){
                        if(!vis[i+1][j+1] && adj[i+1][j+1]!=l){
                        vis[i+1][j+1]=1;
                        // q.push(make_pair(i+1,j+1));
                        // d[i+1][j+1]=min(d[i+1][j+1],d[i][j]+1);
                        if(d[i+1][j+1]>=d[i][j]+1){
                            q.push(make_pair(i+1,j+1));
                            d[i+1][j+1]=d[i][j]+1;
                        }
                        }
                    }
                    if(j-1>=0){
                        if(!vis[i+1][j-1] && adj[i+1][j-1]!=l){
                        vis[i+1][j-1]=1;
                        // q.push(make_pair(i+1,j-1));
                        // d[i+1][j-1]=min(d[i+1][j-1],d[i][j]+1);
                        if(d[i+1][j-1]>=d[i][j]+1){
                            q.push(make_pair(i+1,j-1));
                            d[i+1][j-1]=d[i][j]+1;
                        }
                        }
                    }
                }
                if(i-1>=0){
                    if(j+1<m){
                        if(!vis[i-1][j+1] && adj[i-1][j+1]!=l){
                        vis[i-1][j+1]=1;
                        // q.push(make_pair(i-1,j+1));
                        // d[i-1][j+1]=min(d[i-1][j+1],d[i][j]+1);
                        if(d[i-1][j+1]>=d[i][j]+1){
                            q.push(make_pair(i-1,j+1));
                            d[i-1][j+1]=d[i][j]+1;
                        }
                        }
                    }
                    if(j-1>=0){
                        if(!vis[i-1][j-1] && adj[i-1][j-1]!=l){
                        vis[i-1][j-1]=1;
                        // q.push(make_pair(i-1,j-1));
                        // d[i-1][j-1]=min(d[i-1][j-1],d[i][j]+1);
                        if(d[i-1][j-1]>=d[i][j]+1){
                            q.push(make_pair(i-1,j-1));
                            d[i-1][j-1]=d[i][j]+1;
                        }
                        }
                    }
                }
                debug(d)
            }
        // }
        ll x=0;
        for(i=0;i<n;i++){
            for(j=0;j<m;j++){
               x=max(x,d[i][j]); 
            }
        }
        cout<<x<<"\n";
    }
    
    cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl; 
    return 0;
}
