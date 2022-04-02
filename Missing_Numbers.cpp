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
        ll b,x,y,i,j,k,a1,b1,m,flag=0;
        vector<ll> a(4);
        for(i=0;i<=3;i++)
        {
            cin>>a[i];
        }

        for(i=0;i<4;i++){
            for(j=0;j<4;j++){
                for(k=0;k<4;k++){
                    for(m=0;m<4;m++){
                        if(i!=j && i!=k && i!=m && j!=k && j!=m && k!=m){
                            if((a[i]+a[j])%2==0){
                                a1=(a[i]+a[j])/2;
                                b1=a[i]-a1;
                                if(a1*b1==a[k] && b1!=0){
                                    ll v=a1/b1;
                                    if(v==a[m]){
                                        cout<<a1<<" "<<b1<<"\n";
                                        flag=1;
                                    }
                                }
                            }
                        }
                        if(flag==1)
                        break;
                    }
                    if(flag==1)
                    break;
                }
                if(flag==1)
                break;
            }
            if(flag==1)
            break;
        }
        if(flag==0)
        cout<<-1<<" "<<-1<<"\n";
        // if((a+b)%2){
        //     cout<<-1<<" "<<-1<<"\n";
        // }
        // else{
        //     a1=(a+b)/2;
        //     b1=a-a1;
        //     if(a1*b1==x){
        //         ll v=a1/b1;
        //         if(v==y){
        //             cout<<a1<<" "<<b1<<"\n";
        //         }
        //         else{
        //             cout<<-1<<" "<<-1<<"\n";
        //         }
        //     }
        //     else{
        //         cout<<-1<<" "<<-1<<"\n";
        //     }
        // }
    }
    cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl; 
    return 0;
}
