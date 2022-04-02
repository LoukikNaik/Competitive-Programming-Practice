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
        ll n,i,j,k=0,l,m;
        cin>>n;
        map<ll,ll> m1;
        vector<ll> a(n),b,c;
        // vector<pair<ll,ll>> non_neg;
        vector<pair<ll,ll>> nn;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]==-1)continue;
            b.push_back(a[i]);
            c.push_back(a[i]);
            if(a[i]>i+1){
                k=1;
            }
        }
        map<ll,ll> mn;
        for(i=0;i<n;i++){
            if(a[i]!=-1)
            {
                if(mn[a[i]]==0){
                    nn.pb({i,a[i]});
                    mn[a[i]]++;
                }
            }
        }
        sort(all(c));
        for(i=0;i<c.size();i++){
            if(c[i]!=b[i])
            {
                k=1;
                break;
            }
        }
        if(k==1)
        {
            cout<<-1<<"\n";
            continue;
        }
        // debug(non_neg)
        i=0;
        k=0;
        ll prev=-1;
        vector<ll> ans(n,-1);
        k=0;
        map<ll,ll> vis;
        // for(i=0;i<n;i++){
        //     if(a[i]!=-1){
        //         if(k){
        //             ans[i]=prev;
        //         }
        //         prev=a[i];
        //         vis[a[i]]++;
        //         k++;
        //     }
        // }
        k=0;
        for(auto x:nn){
            if(k){
                ans[x.first]=prev;
            }
            prev=x.second;
            vis[a[x.first]]++;
            k++;
        }
        ll z=0;
        if(a[n-1]==-1){
            ans[n-1]=prev;
            z=1;
        }
        if(z)
        l=n-1;
        else
        l=n;
        // debug(vis)
        for(i=n-1;i>=0;i--){
            if(ans[i]!=-1)continue;
            while(vis[l])
            l--;
            ans[i]=l;
            l--;
        }
        debug(ans)
        for(i=0;i<n;i++)
        cout<<ans[i]<<" ";
        cout<<"\n";
    }
    cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl; 
    return 0;
}
// non_neg [ {1,0} {3,2} {5,5} ]
// non_neg [ {1,2} ]
// 1 3 0 4 2 6 5
// 1 5 0 2 3 7 4
// 1 3 0 4 2 7 5
// 