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
    ll n,s,i,j,l;
    string s1="";
    cin>>n>>s;
    if(s==0 || s>9*n) {
        if(s==0 && n==1)
        cout<<0<<" "<<0;
        else
        cout<<-1<<" "<<-1<<"\n";
    }
    else{
        if(s<n){
            string s1="",s2="";
            ll v=s;
            for(i=1;i<=n;i++){
                if(s-9>=0){
                    s1+='9';
                    s-=9;
                }
                else{
                    ll v=s-(n-i);
                    s1+=(s+'0');
                    // debug(s1)
                    break;
                }
            }
            i++;
            for(j=i;j<=n;j++){
                s1+='0';
            }
            s2+='1';
            v--;
            string s3="";
            for(i=0;i<n-1;i++){
                if(v-9>=0){
                    s3+='9';
                    v-=9;
                }
                else{
                    s3+=(v+'0');
                    break;
                }
            }
            i++;
            for(j=i;j<n-1;j++){
                s3+='0';
            }
            reverse(s3.begin(),s3.end());
            s2+=s3;
            debug(s1)
            debug(s2)
            cout<<s2<<" "<<s1<<"\n";
            return 0;
        }
        ll v=s;
        string s3="";
        for(i=1;i<=n;i++){
            if(s-9>=1){
                s1+='9';
                s-=9;
            }
            else{
                ll v=s-1;
                if(i!=n)
                s1+=(v+'0');
                else{
                    s1+=s+'0';
                }
                debug(s1)
                break;
            }
        }
        i++;
        for(j=i;j<=n;j++){
            if(j!=n)
            s1+='0';
            else
            s1+='1';
        }
        for(i=1;i<=n;i++){
            if(v-9>=0){
                s3+='9';
                v-=9;
            }
            else{
                // ll v=s-(n-i);
                s3+=(v+'0');
                // debug(s1)
                break;
            }
        }
        i++;
        for(j=i;j<=n;j++){
            s3+='0';
        }
        string s2=s1;
        reverse(s2.begin(),s2.end());
        cout<<s2<<" "<<s3<<"\n";
    }
    cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl; 
    return 0;
}
