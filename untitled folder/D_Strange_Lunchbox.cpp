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
    freopen("Error.txt", "w",stderr);
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    fastio
    ll n,i,j,k,l,x,y,z,c1,c2,f,f1,f2,r=0;
    cin>>n>>c1>>c2;
    debug(c1)
    debug(c2)
    vector<pair<ll,ll> > vec,vec1;
    for(i=0;i<n;i++)
    {
        cin>>x>>y;
        vec.pb(mp(x,y));
        vec1.pb(mp(y,x));
    }
    sort(vec.begin(),vec.end());
    sort(vec1.begin(),vec1.end());
    k=0;
    l=0;
    z=0;
    f1=0;
    f2=0;
    for(i=0;i<n;i++)
    {
        debug(vec[i])
        debug(vec1[i])
    }
    for(i=n-1;i>=0;i--)
    {
        l+=vec[i].first;
        z+=vec[i].second;
        k++;
        debug(l)
        debug(z)
        debug(k)
        if(l>=c1 && z>=c2)
        {
            f1=1;
            break;
        }
    }
    f=0;
    l=0;
    z=0;
    for(i=n-1;i>=0;i--)
    {  
        l+=vec1[i].second;
        z+=vec1[i].first;
        f++;
        debug(l)
        debug(z)
        debug(f)
        if(l>=c1 && z>=c2)
        {
            f2=1;
            break;
        }
    }
    debug(f1)
    debug(f2)
    if(f1==0 && f2==0)
    cout<<-1;
    else
    cout<<min(k,f);
    return 0;
}
