#include <bits/stdc++.h>
#include <string>
#include <iostream>
#include <math.h>
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define endl "\n"
 
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
    // t=0;
    // cout<<5<<"\n";
    // for(int i=201;i<=205;i++){
    //     cout<<i<<"\n";
    // }
    while(t--){
        ll n,i,j,k,l,m;
        cin>>n;
        for(i=1;i<=n;i++){
            for(j=n;j>n-i+1;j--){
            cout<<j<<" ";
            }
            for(j=1;j<=2*(n-i)+1;j++){
                cout<<n-i+1<<" ";
            }
            for(j=n-i+2;j<=n;j++){
            cout<<j<<" ";
            }
            cout<<"\n";
        }
        for(i=n-1;i>=1;i--){
            for(j=n;j>n-i+1;j--){
            cout<<j<<" ";
            }
            for(j=1;j<=2*(n-i)+1;j++){
                cout<<n-i+1<<" ";
            }
            for(j=n-i+2;j<=n;j++){
            cout<<j<<" ";
            }
            cout<<"\n";
        }
        
    }
    cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl; 
    return 0;
}
//
// 3 3 3 3 3  
// 3 2 2 2 3   
// 3 2 1 2 3   
// 3 2 2 2 3  
// 3 3 3 3 3 
