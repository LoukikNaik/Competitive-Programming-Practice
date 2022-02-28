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
    ll n,i,j,k;
    cin>>n;
    vector<ll> a(n);
    for(i=0;i<n;i++)
    cin>>a[i];
    vector<vector<ll>> dp(n+1,vector<ll>(n+1));
    for (i = 0; i < n; i++)
        {
            for (j = 0; j < n; j++)
            {
                if (i == j)
                {
                    dp[i][j] = a[i];
                    continue;
                }
                if (i == j + 1 or i == j - 1)
                {
                    dp[i][j] = max(a[i], a[j]);
                    continue;
                }
                if (dp[i][j] != INT_MAX)
                {
                    continue;
                }

                ll ans1 = INT_MAX, ans2 = INT_MAX, ans;
                ans1 = min(ans1, a[i] + dp[i + 2][j]);
                ans1 = min(ans1, a[i] + dp[i + 1][j - 1]);
                ans2 = min(ans2, a[j] + dp[i + 1][j - 1]);
                ans2 = min(ans2, a[j] + dp[i][j - 2]);
                ans = max(ans1, ans2);
                dp[i][j]=ans;
            }
        }
    cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl; 
    return 0;
}
