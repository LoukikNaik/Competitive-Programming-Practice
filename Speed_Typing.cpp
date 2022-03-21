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
 
bool isSubSequence(string str1, string str2, int m, int n)
{
    int j = 0,i; // For index of str1 (or subsequence
 
    // Traverse str2 and str1, and
    // compare current character
    // of str2 with first unmatched char
    // of str1, if matched
    // then move ahead in str1
    for (i = 0; i < n; i++)
    {
        if (str1[j] == str2[i])
            j++;
        if(j==m)
        break;
    }
    // If all characters of str1 were found in str2
    return (j == m);
}
 
int main() {
    // #ifndef ONLINE_JUDGE
    // freopen("/Users/loukiknaik/Desktop/Contest/run/Error.txt", "w",stderr);
    // freopen("/Users/loukiknaik/Desktop/Contest/run/input.txt","r",stdin);
    // freopen("/Users/loukiknaik/Desktop/Contest/run/output1.txt","w",stdout);
    // #endif
    fastio
    ll t,z;
    cin>>t;
    z=t;
    while (t--)
    {
        cout<<"Case #"<<z-t<<": ";
        string s1,s2;
        cin>>s1>>s2;
        ll i=s1.length(),j=s2.length();
        if(i>j)
        {
            cout<<"IMPOSSIBLE\n";
            continue;
        }
        // dp[m][n];
        if(isSubSequence(s1,s2,i,j))
        cout<<j-i<<"\n";
        else
        cout<<"IMPOSSIBLE\n";
    }
    cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl; 
    return 0;
}
