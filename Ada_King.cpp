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
    while(t--){
        ll n,m,i,j,k,l;
        cin>>i>>j>>k;
        // vector<vector<ll>> adj(9,vector<ll>(9,0));
        vector<vector<ll>> d(9,vector<ll>(9,0));
        queue<pair<ll,ll>> q;
        vector<vector<int> > vis( 9 , vector<int> (9, 0));
        q.push({i,j});
        vis[i][j]=1;
        n=9;
        m=9;

            // vis[z.first][z.second]=1;
            while(!q.empty()){
                pair<ll,ll> p=q.front();
                q.pop();
                i=p.first;
                j=p.second;
                if(i+1<n){
                    if(!vis[i+1][j]){
                        vis[i+1][j]=1;
                        q.push(make_pair(i+1,j));
                        d[i+1][j]=d[i][j]+1;
                    }
                }
                if(i-1>=1){
                    if(!vis[i-1][j]){
                        vis[i-1][j]=1;
                        // q.push(make_pair(i-1,j));
                        // d[i-1][j]=min(d[i-1][j],d[i][j]+1);
                        q.push(make_pair(i-1,j));
                        d[i-1][j]=d[i][j]+1;
                    }
                }
                if(j+1<m){
                    if(!vis[i][j+1]){
                        vis[i][j+1]=1;
                        // q.push(make_pair(i,j+1));
                        // d[i][j+1]=min(d[i][j+1],d[i][j]+1);
                        q.push(make_pair(i,j+1));
                        d[i][j+1]=d[i][j]+1;
                    }
                }
                if(j-1>=1){
                    if(!vis[i][j-1]){
                        vis[i][j-1]=1;
                        // q.push(make_pair(i,j-1));
                        // d[i][j-1]=min(d[i][j-1],d[i][j]+1);
                        q.push(make_pair(i,j-1));
                        d[i][j-1]=d[i][j]+1;
                    }
                }
                if(i+1<n){
                    if(j+1<m){
                        if(!vis[i+1][j+1]){
                        vis[i+1][j+1]=1;
                        // q.push(make_pair(i+1,j+1));
                        // d[i+1][j+1]=min(d[i+1][j+1],d[i][j]+1);
                        q.push(make_pair(i+1,j+1));
                        d[i+1][j+1]=d[i][j]+1;
                        }
                    }
                    if(j-1>=1){
                        if(!vis[i+1][j-1]){
                        vis[i+1][j-1]=1;
                        // q.push(make_pair(i+1,j-1));
                        // d[i+1][j-1]=min(d[i+1][j-1],d[i][j]+1);
                        q.push(make_pair(i+1,j-1));
                        d[i+1][j-1]=d[i][j]+1;
                        }
                    }
                }
                if(i-1>=1){
                    if(j+1<m){
                        if(!vis[i-1][j+1]){
                        vis[i-1][j+1]=1;
                        // q.push(make_pair(i-1,j+1));
                        // d[i-1][j+1]=min(d[i-1][j+1],d[i][j]+1);
                        q.push(make_pair(i-1,j+1));
                        d[i-1][j+1]=d[i][j]+1;
                        }
                    }
                    if(j-1>=1){
                        if(!vis[i-1][j-1]){
                        vis[i-1][j-1]=1;
                        // q.push(make_pair(i-1,j-1));
                        // d[i-1][j-1]=min(d[i-1][j-1],d[i][j]+1);
                        q.push(make_pair(i-1,j-1));
                        d[i-1][j-1]=d[i][j]+1;
                        }
                    }
                }
                debug(d)
                // debug(vis)
            }
            ll z=0;
            for(i=1;i<=8;i++){
                for(j=1;j<=8;j++){
                    if(d[i][j]<=k)
                    z++;
                }
            }
            cout<<z<<"\n";
    }
    cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl; 
    return 0;
}
