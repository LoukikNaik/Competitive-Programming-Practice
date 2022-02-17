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
    while (t--)
    {
        ll n,i,j,k,l,r,m,ans1=0,ans2=0,d1,d2;
        cin>>n;
        m=INT_MAX;
        vector<ll> a(n);
        for(i=0;i<n;i++)
        cin>>a[i];
        //1 2 4 5 8 9 
        //3 3 3 3 4 5 5 5 5 
        //3 4 4 4 4 4 5 5 
        sort(a.begin(),a.end());
        l=1;
        r=n-2;
        if(n==2)
        {
            cout<<0<<"\n";
            continue;
        }
        else if(n==3)
        {
            cout<<min(a[1]-a[0],a[2]-a[1])<<"\n";
            continue;
        }
        else{
        for(i=0;i<n-1;i++)
        ans1+=(abs(a[i]-a[(n-1)/2]));
        for(i=1;i<n;i++)
        ans2+=(abs(a[i]-a[1+(n-1)/2]));
        m=min(ans1,ans2);
        debug(t)
        debug(m)
        while(l<r)
        {
            d2=a[n-1]-a[l];
            d1=a[r]-a[0];
            m=min(m,abs(d1-d2));
            debug(m)
            if(d1<d2)
            l++;
            else
            r--;
        }
        cout<<m<<"\n";
        }
    }
    
    cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl; 
    return 0;
}
