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

ll inf = 1e18 ;

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
vector<ll> LIS(vector<ll>& v) // if repeated allowed, use upper_bound
{
    ll n = v.size() ;
    vector<ll> arr(n+1, inf), len(n) ;
    
    arr[0] = -inf ;
    for(int i = 0 ; i < n ; i++)
    {
        ll ind = lower_bound(arr.begin() , arr.end() , v[i]) - arr.begin() ;
        arr[ind] = v[i] ;
        len[i] = ind ;
    }
    
    return len ;
 
}
 
void solve()
{
    ll n ;
    cin >> n ;
    vector<ll> arr(n);
    for(int i = 0 ; i < n ; i++)
        cin >> arr[i] ;
 
    vector<ll> v1 = LIS(arr) ;
    debug(v1)
    reverse(arr.begin() , arr.end()) ;
    for(int i = 0 ; i < n ; i++)
        arr[i] *= -1 ;
    vector<ll> v2 = LIS(arr) ;
    debug(v2)
    reverse(v2.begin() , v2.end()) ;
    debug(v2)
    for(int i = 1 ; i < n ; i++)
        v1[i] = max(v1[i] , v1[i-1]) ;
    debug(v1)
    for(int i = n-2 ; i >= 0 ; i--)
        v2[i] = max(v2[i] , v2[i+1]) ;
    debug(v2)
 
    ll ans = v1[n-1] ;
    for(int i = 0 ; i < n-1 ; i++)
    {
        ans = max(ans , v1[i] + v2[i+1]) ;
    }
    cout << ans << '\n' ;
    debug("hii")
    return ;
 
}

int main() {
    #ifndef ONLINE_JUDGE
    freopen("/Users/loukiknaik/Desktop/Contest/run/Error.txt", "w",stderr);
    freopen("/Users/loukiknaik/Desktop/Contest/run/input.txt","r",stdin);
    freopen("/Users/loukiknaik/Desktop/Contest/run/output1.txt","w",stdout);
    #endif
    fastio
    ll t;
    cin>>t;
    while (t--)
    {
        solve();
    }
    cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl; 
    return 0;
}
