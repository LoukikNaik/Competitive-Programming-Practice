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
        vector<ll> arr;
        // debug(arr)
        for(i=0;i<n;i++){
            cin>>k;
            arr.push_back(k);
            z=min(z,k);
        }
        // if(z<0){
        //     for(i=0;i<n;i++){
        //         arr[i]=arr[i]+abs(z);
        //     }
        // }
        for(i=1;i<n;i++){
            arr[i]=arr[i]+arr[i-1];
        }
        debug(arr)
        ll sum=arr[n-1],ans=-1;
        if(sum==0){
            ans=n;
            for(i=0;i<n;i++){
                if(arr[i]==0)
                ans--;
            }
            cout<<ans<<"\n";
            continue;
        }
        ll sign;
        if(sum>0)
        sign=1;
        else
        sign=-1;
        for(i=1;i<=sqrt(abs(sum));i++){
            if(sum%i==0){
                l=sum/i;
                
                // debug(i)
                ll prev=-1;
                k=0;
                for(j=0;j<n;j++){
                    if(prev==-1 && arr[j]==sign*i){
                        prev=j;
                        // debug(j)
                        // debug(arr[j]);
                        k++;
                        if(j==n-1)
                        ans=max(ans,k);
                        // debug(k)
                    }
                    else{
                        if(arr[j]-arr[prev]==sign*i){
                            prev=j;
                            // debug(j)
                            // debug(arr[j]);
                            k++;
                            if(j==n-1)
                            ans=max(ans,k);
                            // debug(k)
                        }
                    }
                }
                prev=-1;
                k=0;
                // debug(l)
                for(j=0;j<n;j++){
                    if(prev==-1 && arr[j]==l){
                        prev=j;
                        // debug(j)
                        // debug(arr[j]);
                        k++;
                        if(j==n-1)
                        ans=max(ans,k);
                        // debug(k)
                    }
                    else{
                        if(arr[j]-arr[prev]==l){
                            prev=j;
                            // debug(j)
                            // debug(arr[j]);
                            k++;
                            if(j==n-1)
                            ans=max(ans,k);
                            // debug(k)
                        }
                    }
                }
            }
        }
        debug(ans)
        if(ans==-1)
        cout<<n-1<<"\n";
        else
        cout<<n-ans<<"\n";
        /* code */
    }
    
    cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl; 
    return 0;
}
