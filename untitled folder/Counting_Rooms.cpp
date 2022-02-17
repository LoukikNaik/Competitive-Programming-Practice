#include <bits/stdc++.h>
#include <string>
#include <iostream>
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define endl "\n"
#define ll long long
 
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
//typedef long long ll;
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
template <class T> void _print(vector < vector <T> > v){cerr<<"[\n"; {for(vector<T> vec1:v){for(T x:vec1){cerr<<x<<" ";}cerr<<"\n";}}cerr<<"]";}
//vector<vector<int>& v

void traverse(ll i,ll j,ll n,ll m,vector<vector<char> >& arr,vector<vector<int> >& vis)
{
    vis[i][j]=1;
    if(i+1<n)
    if(vis[i+1][j]==0 && arr[i+1][j]=='.')
    {
        debug(arr[i][j])
        traverse(i+1,j,n,m,arr,vis);
    }
    if(j+1<m)
    if(vis[i][j+1]==0 && arr[i][j+1]=='.')
    {
        debug(arr[i][j])
        traverse(i,j+1,n,m,arr,vis);
    }
    if(i-1>=0)
    if(vis[i-1][j]==0 && arr[i-1][j]=='.')
    {
        debug(arr[i][j])
        traverse(i-1,j,n,m,arr,vis);
    }
    if(j-1>=0)
    if(vis[i][j-1]==0 && arr[i][j-1]=='.')
    {
        debug(arr[i][j])
        traverse(i,j-1,n,m,arr,vis);
    }
    debug(vis)
}

int main() {
    #ifndef ONLINE_JUDGE
    freopen("Error.txt", "w",stderr);
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    fastio
    ll n,i,j,l=0,m,z=0;
    cin>>n>>m;
    char k;
    vector<vector<char> > arr;
    vector<vector<int> > vis;
    debug(n)
    debug(m)
    arr.resize(n);
    vis.resize(n);
    for(i=0;i<n;i++)
    {
        arr[i].resize(m);
        vis[i].resize(m,0);
        for(j=0;j<m;j++)
        {
            cin>>k;
            arr[i][j]=k;
        }
    }
    debug(arr)
    debug(vis)
    z=0;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            //cout<<arr[i][j]<<" "<<vis[i][j]<<"\n";
            if(arr[i][j]=='.' && vis[i][j]==0)
            {
                z++;
                traverse(i,j,n,m,arr,vis);
            }
        }
    }
    cout<<z<<"\n";
    return 0;
}
