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
ll n;
map<pair<string,ll>,ll> dp;
bool checkPalin(string s){
    ll l=s.length();
    for(ll i=0;i<s.length()/2;i++){
        if(s[i]==s[l-i-1])
        continue;
        else
        return false;
    }
    return true;
}
bool checkValid(string s){
    if(s.length()<5)
    return true;

    for(ll i=0;i<s.length()-4;i++){
        string s1="";
        for(ll j=0;j<5;j++){
            s1+=s[i+j];
        }
        if(checkPalin(s1))
        return false;
    }
    if(s.length()>=6)
    for(ll i=0;i<s.length()-5;i++){
        string s1="";
        for(ll j=0;j<6;j++){
            s1+=s[i+j];
        }
        if(checkPalin(s1))
        return false;
    }
    return true;
}

bool recurse(string s,string str,int index){
    if(index==n)
    {
        if(checkValid(s))
        return true;
        else
        return false;
    }
    string s1="";
    string s2;
    if(index>=5){
        ll i;
        // debug("hii")
        for(i=index-5;i<=index-1;i++)
        s1+=s[i];
        if(dp[{s1,index}]!=0)
        {
            if(dp[{s1,index}]==1)
            return true;
            else
            return false;
        }
    }
    if(index>=6){
        ll i;
        // debug("hiii")
        s2="";
        s2+=s[index-6];
        s2+=s1;
        if(dp[{s2,index}]!=0)
        {
            if(dp[{s2,index}]==1)
            return true;
            else
            return false;
        }
    }
    debug(s1)
    debug(s2)
    if(str[index]=='?')
    {
        return recurse(s+'1',str,index+1)||recurse(s+'0',str,index+1);
    }
    bool v=recurse(s+str[index],str,index+1);
    if(index>=5){
        if(v)
        dp[{s1,index}]=1;
        else
        dp[{s1,index}]=-1;
    }
    if(index>=6){
        if(v)
        dp[{s2,index}]=1;
        else
        dp[{s2,index}]=-1;
    }
    return v;
}

int main() {
    #ifndef ONLINE_JUDGE
    freopen("/Users/loukiknaik/Desktop/Contest/run/Error.txt", "w",stderr);
    freopen("/Users/loukiknaik/Desktop/Contest/run/input.txt","r",stdin);
    freopen("/Users/loukiknaik/Desktop/Contest/run/output1.txt","w",stdout);
    #endif
    fastio
    ll t,k;
    cin>>t;
    k=t;
    while (t--)
    {
        cout<<"Case #"<<k-t<<": ";
        ll i,j,k,l;
        cin>>n;
        string str;
        cin>>str;
        string s="";
        if(recurse(s,str,0)){
            cout<<"POSSIBLE\n";
        }
        else
        cout<<"IMPOSSIBLE\n";

    }
    cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl; 
    return 0;
}
