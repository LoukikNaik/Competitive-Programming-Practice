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
    freopen("run/Error.txt", "w",stderr);
    freopen("run/input.txt","r",stdin);
    freopen("run/output1.txt","w",stdout);
    #endif
    fastio
    ll t;
    cin>>t;
    while (t--)
    {
        ll n,i,j,k,l,m;
        cin>>n;
        vector<ll> a(n);
        for(i=0;i<n;i++)
        cin>>a[i];
        ll first_neg_index=-1,last_neg_index=-1,count1=0,count2=0,first_neg_value=0,last_neg_value=0,no_of_neg=0;
        k=0;
        l=-1;
        ll left_index=0,right_index=n-1,ans_count2=0;
        for(i=0;i<n;i++){
            if(a[i]==0){
                k=0;
                if(no_of_neg%2==0){
                    if(count2>ans_count2){
                        count2=ans_count2;
                        left_index=l+1;
                        right_index=i-1;
                    }
                }
                else{
                    if(abs(first_neg_value)==2 && abs(last_neg_value)==2){
                        count2--;
                        if(count2>ans_count2){
                            
                        }
                    }
                }
                l=i;
            }
            if(a[i]<0){
                no_of_neg++;
                if(k==0){
                    first_neg_index=i;
                    first_neg_value=a[i];
                }
                last_neg_index=i;
                last_neg_value=a[i];
                k=1;
            }
            if(abs(a[i])==2){
                count2++;
            }
        }
    }
    cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl; 
    return 0;
}