#include <bits/stdc++.h>
#include <string>
#include <iostream>
#define pb push_back
#define mp make_pair
#define ff first
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
vector<ll> a;
vector<ll> dp;
ll recurse(ll n){
    if(n<0)
    return INT_MAX-1;
    if(n==0)
    return 0;
    ll ans=INT_MAX;
    for(ll i=0;i<a.size();i++){
        ans=min(ans,1+recurse(n-a[i]));
    }
    return dp[n]=ans;
}

int main() {
    #ifndef ONLINE_JUDGE
    freopen("/Users/loukiknaik/Desktop/Contest/run/Error.txt", "w",stderr);
    freopen("/Users/loukiknaik/Desktop/Contest/run/input.txt","r",stdin);
    freopen("/Users/loukiknaik/Desktop/Contest/run/output.txt","w",stdout);
    #endif
    fastio
    ll n,sum,i,j,k,l;
    cin>>n>>sum;
    a.resize(n);
    dp.resize(sum+1);
    for(i=0;i<n;i++)
    cin>>a[i];
    // vector<ll> dp((sum+1),-1);
    // for(i=1;i<=sum;i++){
    //     dp[i]=INT_MAX-1;
    // } 
    // dp[0]=0;
    // debug(dp)
    // for(i=1;i<=sum;i++){
    //     if(i-a[0]>=0)
    //     dp[i]=min(dp[i],1+dp[i-a[0]]);
    // }
    // debug(dp)
    // for(i=2;i<=n;i++){
    //     for(j=1;j<=sum;j++){
    //         if(j>=a[i-1])
    //         {
    //             dp[j]=min(dp[j],1+dp[j-a[i-1]]);
                
    //         }
    //     }
    //     // debug(dp)
    // }
    // // debug(dp)
    // if(dp[sum]==INT_MAX-1)
    // cout<<-1;
    // else
    // cout<<dp[sum];
    ll ans=recurse(sum);
    if(ans>=INT_MAX-1)
    cout<<-1;
    else
    cout<<ans<<"\n";
    cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl; 
    return 0;
}
