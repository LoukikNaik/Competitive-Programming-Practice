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
        ll n,i,j,k,l,z=0;
        cin>>n;
        vector<ll> vec;
        k=0;
        for(i=0;i<n;i++)
        {
            cin>>l;
            if(l%2==1)
            k++;
            else
            z++;
            vec.push_back(l);
        }
        debug(vec)
        ll a,b;
        if(z==0){
            if(n%2==0){
                cout<<n/2<<"\n";
                for(i=1;i<n;i+=2){
                    cout<<i<<" "<<i+1<<"\n";
                }
            }
            else{
                cout<<n/2<<"\n";
                for(i=2;i<n;i+=2){
                    cout<<i<<" "<<i+1<<"\n";
                }
            }
        }
        else if(k==0)
        cout<<"-1\n";
        else{
            ll e1=0,o1=0,ee,eo,oe,oo;
            for(i=0;i<n;i++){
                if(i%2==0){
                    if(vec[i]%2==0){
                        ee=i;
                        debug(ee)
                    }
                    else{
                        e1++;
                        debug(e1)
                    }
                }
                if(i%2==1){
                    if(vec[i]%2==1){
                        eo=i;
                        debug(eo)
                    }
                    else{
                        e1++;
                        debug(e1)
                    }
                }
            }
            for(i=0;i<n;i++){
                if(i%2==0){
                    if(vec[i]%2==1){
                        oo=i;
                        debug(oo)
                    }
                    else{
                        o1++;
                        debug(o1)
                    }
                }
                if(i%2==1){
                    if(vec[i]%2==0){
                        oe=i;
                        debug(oe)
                    }
                    else{
                        o1++;
                        debug(o1)
                    }
                }
            }
            if(e1<o1){
                cout<<e1<<"\n";
                for(i=0;i<n;i++){
                    if(i%2==0){
                        if(vec[i]%2==0){
                            // ee=vec[i];
                        }
                        else{
                            cout<<i+1<<" "<<eo+1<<"\n";
                        }
                    }
                    if(i%2==1){
                        if(vec[i]%2==1){
                            // eo=vec[i];
                        }
                        else{
                            cout<<i+1<<" "<<eo+1<<"\n";
                        }
                    }
                }
            }
            else{
                cout<<o1<<"\n";
                for(i=0;i<n;i++){
                    if(i%2==0){
                        if(vec[i]%2==1){
                            // e=i;
                        }
                        else{
                            cout<<i+1<<" "<<oo+1<<"\n";
                        }
                    }
                    if(i%2==1){
                        if(vec[i]%2==0){
                            // oo=i;
                        }
                        else{
                            cout<<i+1<<" "<<oo+1<<"\n";
                        }
                    }
                }
            }
            
        }

    }
    
    cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl; 
    return 0;
}
