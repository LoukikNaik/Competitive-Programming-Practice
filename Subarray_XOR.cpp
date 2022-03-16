#include <bits/stdc++.h>
#include <string>
#include <iostream>
#define pb push_back
#define mp make_pair
#define ff first
#define rz resize
#define ss second
#define endl "\n"
 
#define MOD 998244353
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
ll substract(ll x,ll y,ll n){
    return (x % n - y % n + n) % n;
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
        ll n,i,j,k,l,m,z,ans=0;
        cin>>n;
        string str;
        cin>>str;
        for(i=0;i<n;i++){
            if(str[i]=='0')continue;
            k=i+1;
            if(k%2==0)
            continue;
            debug(k)
            l=n-i;
            debug(l)
            z=power(2,l);
            z=substract(z,1,MOD);
            ans=(ans^z)%MOD;
        }
        debug("hii")
        cout<<ans<<"\n";
    }
    cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl; 
    return 0;
}

// 1101^1=1100
// 1000^1 ^ 100 ^1 ^ 1^1=1001^101^0=1100

// 1111 111 111 11 11 11 1 1 1 1
// 2^3 2^2 2^1 2^0 2*(2^2 2^1 2^0) 3*(2^1 2^0) 4*(2^0)

//101 10 1 01 1 0
//2^2 2*1 2^0 2^1 2^0 2^0 2^0
// 11111 
// 1011
// 1011 101 011 10 01 11 1 0 1 1