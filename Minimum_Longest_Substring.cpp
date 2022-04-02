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
        ll n,i,j,k,l,m;
        cin>>n;
        string str;
        cin>>str;
        debug(str.length())
        ll c1=0,c0=0;
        for(auto x:str){
            if(x=='1')
            c1++;
            else
            c0++;
        }
        string s1="",s2="";
        if(c1==c0){
            k=c0;
            while(k--)
            s1+='0';
            k=c1;
            while(k--)
            s1+='1';
            k=c0;
            while(k--)
            s2+="10";
        }
        else if(c1>c0){
            k=c0;
            while(k--)
            s1+='0';
            k=c1;
            while(k--)
            s1+='1';
            k=c1;
            l=(c1)/(c0+1);
            ll mb=c1%(c0+1);
            // debug(l)
            string tmp="";
            while(l--)
            tmp+='1';
            while(s2.length()!=n){
                s2+=tmp;
                if(s2.length()==n)
                break;
                if(mb){
                    s2+='1';
                    mb--;
                }
                s2+='0';
                if(s2.length()==n)
                break;
            }
            debug(s1)
            debug(s2)
        }
        else{
            k=c1;
            while(k--)
            s1+='1';
            k=c0;
            while(k--)
            s1+='0';
            k=c0;
            l=(c0)/(c1+1);
            ll mb=c0%(c1+1);
            string tmp="";
            while(l--)
            tmp+='0';
            while(s2.length()!=n){
                s2+=tmp;
                if(s2.length()==n)
                break;
                if(mb){
                    s2+='0';
                    mb--;
                }
                s2+='1';
                if(s2.length()==n)
                break;
            }
            debug(s1)
            debug(s2)
        }
        cout<<s1<<"\n"<<s2<<"\n"; 
    }
    cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl; 
    return 0;
}

//111011011 3
//111101110111 4
// 11101101101 3
// 111011011011 3
//
