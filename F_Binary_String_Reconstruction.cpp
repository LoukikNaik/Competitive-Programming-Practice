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
        ll n1,n2,n3,i,j,k,l,m,n;
        cin>>n1>>n2>>n3;
        if(2*n1<=n2){
            string s="";
            while(n1>0){
                if(s=="")
                s+="1001";
                else
                s+="001";
                n1--;
                n2-=2;
            }
            while(n2>=2){
                if(s=="")
                s+="101";
                else
                s+="01";
                n2-=2;
            }
            if(n2>0){
                if(s=="")
                s+="01";
                else
                s='0'+s;
                n2--;
            }
            while(n3)
            {
                if(s=="")
                s+="11";
                else
                s+='1';
                n3--;
            }
            debug(s)
            cout<<s<<"\n";
        }
        else{
            string s="";
            while(n1>0 && n2>=2){
                if(s=="")
                {
                    if(n2<=3)
                    {
                        s+='1';
                        for(i=0;i<=n1;i++){
                            s+='0';
                        }
                        s+='1';
                        n1=1;
                    }
                    else
                    s+="1001";
                }
                else if(n2<=3){
                    for(i=0;i<=n1;i++)
                    s+='0';
                    s+='1';
                    n1=1;
                }
                else
                s+="001";
                n1--;
                n2-=2;
            }
            while(n1>0){
                if(s=="")
                s+="00";
                else
                s+="0";
                n1--;
            }
            if(n2>0){
                if(s[0]=='1')
                s='0'+s;
                else
                {
                    s+='1';
                }
                n2--;
            }
            while(n3)
            {
                if(s=="")
                s+="11";
                else
                s+='1';
                n3--;
            }
            debug(s)
            cout<<s<<"\n";
        }
    }
    cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl; 
    return 0;
}


