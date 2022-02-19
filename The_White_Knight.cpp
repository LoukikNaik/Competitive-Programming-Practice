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
vector<vector<char>> vec;
vector<vector<ll>>dp;
map<pair<ll,ll>,ll> m1;
ll n,z=0;
ll recurse(ll i1,ll j1, ll k){
    if(i1>=n || j1>=n || i1<0 || j1<0)
    return 0;
    if(dp[i1][j1]!=-1)
    {
        debug("hii")
        return dp[i1][j1];
    }
    if(vec[i1][j1]=='P')
    {
        dp[i1][j1]=max(dp[i1][j1],1+recurse(i1-2,j1+1,k));
        dp[i1][j1]=max(dp[i1][j1],1+recurse(i1+2,j1+1,k));
        dp[i1][j1]=max(dp[i1][j1],1+recurse(i1+1,j1+2,k));
        dp[i1][j1]=max(dp[i1][j1],1+recurse(i1-1,j1+2,k));
    }
    else{
        dp[i1][j1]=max(dp[i1][j1],recurse(i1-2,j1+1,k));
        dp[i1][j1]=max(dp[i1][j1],recurse(i1+2,j1+1,k));
        dp[i1][j1]=max(dp[i1][j1],recurse(i1+1,j1+2,k));
        dp[i1][j1]=max(dp[i1][j1],recurse(i1-1,j1+2,k));
    }
    return dp[i1][j1];
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
        ll i,j,k,l,m,i1,j1;
        cin>>n;
        vec.clear();
        dp.clear();
        vec.resize(n);
        dp.resize(n);
        for(i=0;i<n;i++)
        {
            string str;
            cin>>str;
            vec[i].resize(n);
            dp[i].resize(n,-1);
            for(j=0;j<n;j++)
            {
                vec[i][j]=str[j];
                if(str[j]=='K'){
                    i1=i;
                    j1=j;
                }
            }
        }
        debug(vec)
        debug(i1)
        debug(j1)
        ll ans;
        ans=recurse(i1,j1,0);
        debug(ans)
        debug(dp)
        cout<<ans<<"\n";

    }
    
    cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl; 
    return 0;
}
