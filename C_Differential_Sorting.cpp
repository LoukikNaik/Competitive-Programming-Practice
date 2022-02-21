#include <bits/stdc++.h>
#include <string>
#include <iostream>
#define pb push_back
#define mp make_pair
#define ff first
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
        ll n,i,j,k,l,m;
        cin>>n;
        vector<ll> vec(n),a(n);
        for(i=0;i<n;i++)
        cin>>vec[i];
        a[n-1]=n-1;
        for(i=n-2;i>=0;i--){
            // a[i]=max(vec[a[i+1]],vec[i]);
            if(vec[a[i+1]]>vec[i])
            a[i]=a[i+1];
            else
            a[i]=i;
        }
        debug(vec)
        debug(a)
        vector<ll> a1,a2,a3;
        ll flag=0;
        if(vec[n-2]<vec[n-1])
        {
            for(i=1;i<n;i++){
                if(vec[i]>=vec[i-1])continue;
                else{
                    vec[i-1]=vec[i]-vec[a[i]];
                    if(vec[i-1]>vec[i])
                    {
                        flag=1;
                        break;
                    }
                    a1.push_back(i-1);
                    a2.push_back(i);
                    a3.push_back(a[i]);
                }
            }
            if(flag==1)
            cout<<"-1\n";
            else{
                cout<<a1.size()<<'\n';
                for(i=0;i<a1.size();i++){
                    cout<<a1[i]+1<<" "<<a2[i]+1<<" "<<a3[i]+1<<"\n";
                }
            }
        }
        else{
            cout<<"-1\n";
        }
    }
    cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl; 
    return 0;
}
