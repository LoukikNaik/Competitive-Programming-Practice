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
ll gcd(ll a,ll b){if(a==0)return b; return gcd(b%a,a);}

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
vector<ll> dp(1005,-1);
ll x,y,ans=INT_MAX;
ll checkVal(string s){
    ll i,j,k,m=0;
    for(i=0;i<s.length()-1;i++){
        string s1="";
        s1+=s[i];
        s1+=s[i+1];
        if(s1=="CJ")
        m+=x;
        if(s1=="JC")
        m+=y;
    }
    return m;
}
ll recurse(string &str,string s,ll index,ll prev){
    if(index==str.length())
    {
        ll k=checkVal(s);
        if(k<ans){
            ans=k;
        }
        return dp[index]=ans;
    }
    // if(dp[index]!=-1)
    // return dp[index];

    ll a1=INT_MAX;
    if(str[index]=='?'){
        a1=min(a1,recurse(str,s+'J',index+1,1));
        a1=min(a1,recurse(str,s+'C',index+1,0));
    }
    else{
        if(str[index]=='J')
        a1=recurse(str,s+str[index],index+1,1);
        else
        a1=recurse(str,s+str[index],index+1,0);
    }
    return dp[index]=a1;
}
int main() {
    #ifndef ONLINE_JUDGE
    freopen("run/Error.txt", "w",stderr);
    freopen("run/input.txt","r",stdin);
    freopen("run/output1.txt","w",stdout);
    #endif
    fastio
    ll t,c;
    cin>>t;
    c=t;
    while (t--){
        ll i,j,k,l;
        cin>>x>>y;
        string str;
        cin>>str;
        string s="";
        ans=INT_MAX;
        dp.clear();
        dp.resize(1001,-1);
        ll a2=recurse(str,s,0,2);
        cout<<"Case #"<<c-t<<": "<<a2<<endl;
    }
    cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl; 
    return 0;
}
