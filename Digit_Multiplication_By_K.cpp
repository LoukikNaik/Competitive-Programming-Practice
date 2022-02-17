#include <bits/stdc++.h>
#include <string>
#include <iostream>
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
    while(t--){
        ll n,m,k,i,j,l,z;
        cin>>n>>k>>m;
        string s;
        cin>>s;
        vector<ll> vec(10,0),vec1(10,0);
        for(i=0;i<s.length();i++){
            // debug(s[i]-'0')
            vec[s[i]-'0']+=1;
        }
        // debug(vec)
        // debug(vec1)
        for(i=0;i<m;i++){
            for(j=0;j<=9;j++){
                l=j*k;
                // debug(l)
                if(l==0){
                    vec1[l%10]+=vec[j]%1000000007;
                }
                while(l>0){
                    vec1[l%10]+=vec[j]%1000000007;
                    l=l/10;
                }
            }
            // debug(vec1);
            vec=vec1;
            fill(vec1.begin(),vec1.end(),0);
        }
        l=0;
        for(i=0;i<=9;i++){
            l+=vec[i]%1000000007;
            l=l%1000000007;
        }
        cout<<l%1000000007<<"\n";

    }
    cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl; 
    return 0;
}
/*
1 2
2 1
4 2
8 3
1 6 4
2 1 2 5
4 2 4 6
8 4 8 7
1 6 8 1 6 8
1 1 2 1 6 1 1 2 9
1 3
3 1
9 2
2 7 3
6 2 1 4
1 8 6 3 5
3 2 4 1 8 2 7 6 
1 4
4 1
1 6 2
4 2 4 3
1 6 8 1 6 4
4 2 4 3 2 4 2 4 1 6 5


*/
