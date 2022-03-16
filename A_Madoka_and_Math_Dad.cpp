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
// vector<vector<ll>> dp(10);
// ll recurse(ll i,ll n){
//     if(n==0)
//     return i;
//     if(n<0)
//     return 0;
//     ll ans=0,z=i%10;
//     if(n>=z+1 && z+1<=9){
//         ans=max(ans,recurse(10*i+z+1,n-(z+1)));
//     }
//     if(n>=z-1 && z-1>=1){
//         ans=max(ans,recurse(10*i+(z-1),n-(z-1)));
//     }
//     return ans;
// }
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
        ll n,i,j,k,l;
        cin>>n;
        ll ans=0;
        // for(i=1;i<=9;i++){
        //     dp[i].clear();
        //     dp[i].resize(1005,-1);
        // }
        if(n==1 || n==2)
        {
            cout<<n<<"\n";
            continue;
        }
        if(n%3==1){
            i=0;
            while(n>0){
                if(i%2==0){
                    cout<<1;
                    n-=1;
                }
                else
                {
                    cout<<2;
                    n-=2;
                }
                i++;
            }
        }
        else{
            i=0;
            while(n>0){
                if(i%2==0){
                    cout<<2;
                    n-=2;
                }
                else
                {
                    cout<<1;
                    n-=1;
                }
                i++;
            }
        }
        cout<<"\n";
    }
    cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl; 
    return 0;
}
// 1
// 2
// 21
// 121
// 212
// 2121
// 12121
// 21212
// 212121
// 1212121
