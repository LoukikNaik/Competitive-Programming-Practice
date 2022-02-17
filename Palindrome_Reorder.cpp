#include <bits/stdc++.h>
#include <string>
#include <iostream>
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define endl "\n"
 
#define all(x) (x).begin(),(x).end()
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
typedef long long ll;
typedef unsigned long long ull;
typedef long double lld;

using namespace std;

// #ifndef ONLINE_JUDGE
// #define debug(x) cerr<< #x <<" "; _print(x); cerr<<endl;
// #else
// #define debug(x)
// #endif

// void _print(ll t) {cerr << t;}
// void _print(int t) {cerr << t;}
// void _print(string t) {cerr << t;}
// void _print(char t) {cerr << t;}
// void _print(lld t) {cerr << t;}
// void _print(double t) {cerr << t;}
// void _print(ull t) {cerr << t;}

// template <class T, class V> void _print(pair <T, V> p);
// template <class T> void _print(vector <T> v);
// template <class T> void _print(set <T> v);
// template <class T, class V> void _print(map <T, V> v);
// template <class T> void _print(multiset <T> v);
// template <class T, class V> void _print(pair <T, V> p) {cerr << "{"; _print(p.ff); cerr << ","; _print(p.ss); cerr << "}";}
// template <class T> void _print(vector <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
// template <class T> void _print(set <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
// template <class T> void _print(multiset <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
// template <class T, class V> void _print(map <T, V> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}
// template <class T> void _print(vector < vector <T> > v){cerr<<"["<<endl; {for(vector<T> vec1:v){for(T x:vec1){cerr<<x<<" ";}cerr<<endl;}}cerr<<"]";}


int main() {
    // #ifndef ONLINE_JUDGE
    // freopen("/Users/loukiknaik/Desktop/Contest/run/Error.txt", "w",stderr);
    // freopen("/Users/loukiknaik/Desktop/Contest/run/input.txt","r",stdin);
    // freopen("/Users/loukiknaik/Desktop/Contest/run/output.txt","w",stdout);
    // #endif
    // fastio
    string str;
    cin>>str;
    map<char,ll> m;
    ll i,j,k,l,z;
    l=str.length();
    for(i=0;i<l;i++){
        m[str[i]]++;
    }
    ll even=0,odd=0;
    for(auto k:m){
        // cout<<k.first<<" "<<k.second<<"\n";
        if(k.second%2==1)
        odd++;
        else
        even++;
    }
    if(odd>1){
        cout<<"NO SOLUTION\n";
    }
    else{
        string s1,s2;
        char ch;
        for(auto k:m){
            if(k.second%2==1)
            ch=k.first;
            for(i=0;i<k.second/2;i++){
                s1+=k.first;
                s2+=k.first;
            }
        }
        if(l%2==1){
            s1+=ch;
        }
        reverse(all(s2));
        // debug(s1+s2)
        cout<<s1+s2<<"\n";
    }
    // cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl; 
    return 0;
}
