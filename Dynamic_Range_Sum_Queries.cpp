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
template <class T, class V> void _print(pair <T, V> p) {cerr << "{"; _print(p.ff); cerr << ","; _print(p.ss); cerr << "}";}
template <class T> void _print(vector <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(set <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(multiset <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T, class V> void _print(map <T, V> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(vector < vector <T> > v){cerr<<"["<<endl; {for(vector<T> vec1:v){for(T x:vec1){cerr<<x<<" ";}cerr<<endl;}}cerr<<"]";}

vector<ll> a(200005),seg(4*200005);
void build(ll ind, ll low, ll high){
    if(low==high)
    {
        seg[ind]=a[low];
        return;
    }
    ll mid=(low+high)/2;
    build(2*ind+1,low,mid);
    build(2*ind+2,mid+1,high);
    seg[ind]=seg[2*ind+1]+seg[2*ind+2];
}

ll query(ll ind, ll low, ll high, ll l ,ll r){
    if(low>=l && high<=r){
        return seg[ind];
    }
    if(high<l || low>r)return 0;
    ll mid=(low+high)/2;
    ll left=query(2*ind+1,low,mid,l,r);
    ll right=query(2*ind+2,mid+1,high,l,r);
    return left+right;
}

void update(ll ind, ll low, ll high, ll node, ll val){
    if(low==high)
    {
        seg[ind]=val;
    }
    else{
        ll mid=(low+high)>>1;
        if(low<=node && mid>=node)update(2*ind+1,low,mid,node,val);
        else update(2*ind+2,mid+1,high,node,val);
        seg[ind]=seg[2*ind+1]+seg[2*ind+2];
    }
}

int main() {
    #ifndef ONLINE_JUDGE
    freopen("/Users/loukiknaik/Desktop/Contest/run/Error.txt", "w",stderr);
    freopen("/Users/loukiknaik/Desktop/Contest/run/input.txt","r",stdin);
    freopen("/Users/loukiknaik/Desktop/Contest/run/output1.txt","w",stdout);
    #endif
    fastio
    ll n,q,i,j,k;
    cin>>n>>q;
    for(i=0;i<n;i++)
    cin>>a[i];
    build(0,0,n-1);
    while (q--)
    {
        /* code */
        ll z,l,r;
        cin>>z>>l>>r;
        if(z==1)
        {
            // debug(a)
            // debug(seg)
            update(0,0,n-1,l-1,r);
            // debug(a)
            // debug(seg)

        }
        else
        {
            cout<<query(0,0,n-1,l-1,r-1)<<"\n";
        }
    }
    
    cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl; 
    return 0;
}
