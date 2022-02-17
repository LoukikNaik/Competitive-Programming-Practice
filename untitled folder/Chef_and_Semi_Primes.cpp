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

vector<bool> is_prime(100000000, true);
void isPrime(ll n){
    is_prime[0] = is_prime[1] = false;
    for (ll i = 2; i <= n; i++) {
        if (is_prime[i] && (long long)i * i <= n) {
        for (ll j = i * i; j <= n; j += i)
            is_prime[j] = false;
        }
    }
}

int main() {
    #ifndef ONLINE_JUDGE
    freopen("Error.txt", "w",stderr);
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    fastio
    isPrime(200);
    vector<ll> vec;
    map<ll,ll> m;
    set<ll> s;
    ll i,j;
    for(i=0;i<200;i++)
    {
        if(is_prime[i])
        vec.push_back(i);
    }
    for(i=0;i<vec.size();i++)
    {
        for(j=i+1;j<vec.size();j++)
        {
            if(i!=j)
            {
                m[vec[i]*vec[j]]+=1;
                s.insert(vec[i]*vec[j]);
            }
        }
    }
    debug(m)
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,k,l;
        cin>>n;
        set<ll> :: iterator it;
        l=0;
        debug(s)
        for(it=s.begin();*it<=n;it++)
        {
            k=*it;
            if(m[n-k]>0)
            {
                debug(n-k)
                l=1;
                break;
            }
        }
        debug(l)
        if(l==1)
        cout<<"YES\n";
        else
        cout<<"NO\n";
    } 
    return 0;
}
