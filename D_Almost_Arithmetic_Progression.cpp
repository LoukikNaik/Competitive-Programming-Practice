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
    ll n,i,j,k,l,m;
    cin>>n;
    vector<ll> a(n);
    for(i=0;i<n;i++)
    cin>>a[i];
    if(n<=2)
    cout<<0<<"\n";
    else{
        ll ans=INT_MAX,prev,f;
        for(ll a1=-1;a1<=1;a1++){
            for(ll b=-1;b<=1;b++){
                ll x,y;
                x=a[0]+a1;
                y=a[1]+b;
                k=y-x;
                prev=y;
                l=abs(a1)+abs(b);
                f=0;
                for(i=2;i<n;i++){
                    if(a[i]==(prev+k))
                    {
                        prev=a[i];
                    }
                    else if((a[i]+1)==(prev+k)){
                        prev=a[i]+1;
                        l++;
                    }
                    else if((a[i]-1)==(prev+k)){
                        prev=a[i]-1;
                        l++;
                    }
                    else{
                        f=1;
                        break;
                    }
                }
                if(f==0)
                ans=min(ans,l);
                debug(k)
                debug(ans)
            }
        }
        if(ans==INT_MAX)
        cout<<-1<<"\n";
        else{
            cout<<ans<<"\n";
        }
    }

    cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl; 
    return 0;
}
