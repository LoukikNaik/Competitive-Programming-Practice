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
    ll n,m,i,j,k,l,z,prev;
    cin>>n>>m;
    vector<ll> ticket,maxprice;
    map<ll,ll> m1;
    for(i=0;i<n;i++)    
    {
        cin>>k;
        if(m1[k]==0)
        ticket.pb(k);
        m1[k]++;
    }
    sort(ticket.begin(),ticket.end());
    debug(ticket)
    for(i=0;i<m;i++)
    {
        cin>>k;
        maxprice.pb(k);
    }
    for(i=0;i<m;i++)
    {
        //cout<<1<<"\n";
        debug(ticket)
        z=lower_bound(ticket.begin(),ticket.end(),maxprice[i])-ticket.begin();
        if(maxprice[i]!=ticket[z] || m1[ticket[z]]<=0)
        z--;
        // while(m1[ticket[z]]<=0)
        // {
        //    //prev=z;
        //    z--;
        //    if(z<0)
        //    break;
        // }
        if(z<0)
        {
            cout<<-1<<"\n";
            continue;
        }
        //debug(z);
        if(m1[ticket[z]]>0)
        {
            cout<<ticket[z]<<"\n";
            m1[ticket[z]]-=1;
            if(m1[ticket[z]]==0)
            ticket.erase(ticket.begin()+z);
        }
        else
        cout<<-1<<"\n";
        //debug(ticket)
    }
    cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl; 
    return 0;
}
