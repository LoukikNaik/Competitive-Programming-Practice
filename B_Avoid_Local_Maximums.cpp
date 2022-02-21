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
    freopen("/Users/loukiknaik/Desktop/Contest/run/output.txt","w",stdout);
    #endif
    fastio
    ll t;
    cin>>t;
    while (t--)
    {
        /* code */
        ll n,i,j,k,l,m;
        cin>>n;
        vector<ll> v(n),a(n);
        for(i=0;i<n;i++){
            cin>>v[i];
        }
        for(i=1;i<n-1;i++){
            if(v[i-1]<v[i] && v[i+1]<v[i]){
                a[i]=v[i];
            }
        }
        debug(a)
        k=0;
        for(i=1;i<n-1;i++){
            if(a[i]<a[i-1] && a[i]<a[i+1]){
                v[i]=max(v[i+1],v[i-1]);
                k++;
                a[i-1]=0;
                a[i+1]=0;
            }
            debug(v)
            debug(a)
        }
        for(i=1;i<n-1;i++){
            if(v[i-1]<v[i] && v[i+1]<v[i]){
                k++;
                v[i]=max(v[i-1],v[i+1]);
            }
        }
        debug(k)
        debug(v)
        cout<<k<<"\n";
        for(auto z:v){
            cout<<z<<" ";
        }
        cout<<"\n";
        // debug(a)
    }
    
    cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl; 
    return 0;
}
