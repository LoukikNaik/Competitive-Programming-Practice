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


int main() {
    #ifndef ONLINE_JUDGE
    freopen("/Users/loukiknaik/Desktop/Contest/run/Error.txt", "w",stderr);
    freopen("/Users/loukiknaik/Desktop/Contest/run/input.txt","r",stdin);
    freopen("/Users/loukiknaik/Desktop/Contest/run/output1.txt","w",stdout);
    #endif
    fastio
    ll n,i,j,k,l1,l2;
    string s1,s2;
    cin>>s1>>s2;
    l1=s1.length();
    l2=s2.length();
    vector<vector<ll>> dp(l1+1,vector<ll>(l2+1,-1));
    for(i=0;i<=l1;i++){
        dp[i][0]=0;
    }
    for(i=0;i<=l2;i++){
        dp[0][i]=0;
    }
    debug(dp)
    k=1;
    ll z=0;
    for(i=1;i<=l2;i++){
        if(s1[0]==s2[i-1]){
            dp[1][i]=i-1;
        }
        else
        dp[1][i]=dp[1][i-1]+1;
    }
    k=0;
    z=0;
    for(i=1;i<=l1;i++){
        if(s1[i-1]==s2[0]){
            dp[i][1]=i-1;
        }
        else
        {
            dp[i][1]=dp[i-1][1]+1;
        }
    }
    debug(dp)
    for(i=2;i<=l1;i++){
        for(j=2;j<=l2;j++){
            // debug(s1[i-1])
            // debug(s2[j-1])
            if(s1[i-1]==s2[j-1]){
                dp[i][j]=dp[i-1][j-1];
            }
            else{

                if(i==j)
                dp[i][j]=min(dp[i-1][j],dp[i][j-1]);
                else
                dp[i][j]=min(dp[i-1][j],dp[i][j-1])+1;
            }
        }
    }
    debug(dp)
    cout<<dp[l1][l2];
    cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl; 
    return 0;
}
