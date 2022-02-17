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
int func(string str,string s){
    // cout<<str<<" "<<s<<"\n";
    ll i,j,k,l,m,flag;
    i=0;
    j=0;
    l=0;
    m=0;
    flag=0;
    for(i=0;i<str.length();i++){
        if(str[i]==s[j]){
            flag=1;
            j++;
            if(j==s.length())
            {
                m=1;
                break;
            }
        }
        else if(flag==1 && str[i]!=s[j])
        l++;
    }
    if(m==1)
    {
        return l;
    }
    else return -1;
}

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
        string str,s="",alpha="abcdefghijklmnopqrstuvwxyz";
        cin>>str;
        cin>>m;
        while(m>=26){
            s+=(alpha);
            m=m-26;
        }
        s+=alpha.substr(0,m);
        debug(s)
        vector<char> vec(str.begin(), str.end());
        debug(vec);
        ll y=0,b=s.length();
        if(26>s.length())
        b=s.length();
        else
        b=26;
        for(i=0;i < b ;i++){
            if(count(vec.begin(),vec.end(),s[i]))
            continue;
            else
            {
                y=1;
                cout<<"-1\n";
            }
        }
        if(y==1)
        continue;
        ll z=-1;
        for(i=0;i<n;i++){
            if(str[i]=='a')
            {
                l=func(str.substr(i,n-i),s);
                if(l!=-1){
                    if(z==-1)
                    z=l;
                    else
                    z=min(z,l);
                }
            }
        }
        cout<<z<<"\n";
        // ll flag=0,z1=0,z2=0;
        // j=0;
        // k=0;

        // for(i=0;i<str.length();i++){
        //     if(str[i]==s[j]){
        //         flag=1;
        //         j++;
        //         if(j==s.length())
        //         {
        //             z1=1;
        //             break;
        //         }
        //     }
        //     else if(flag==1 && str[i]!=s[j]){
        //         k++;
        //     }
        // }
        // j=s.length()-1;
        // ll v=0;
        // flag=0;
        // for(i=str.length()-1;i>=0;i--){
        //     if(str[i]==s[j]){
        //         flag=1;
        //         j--;
        //         if(j==-1)
        //         {
        //             z2=1;
        //             break;
        //         }
        //     }
        //     else if(flag==1 && str[i]!=s[j]){
        //         v++;
        //     }
        // }
        // if(z1==1 && z2==1)
        // {
        //     cout<<min(k,v)<<"\n";
        // }
        // else if(z1==1){
        //     cout<<k<<"\n";
        // }
        // else if(z2==1){
        //     cout<<v<<"\n";
        // }
        // else
        // cout<<"-1\n";
    }
    
    cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl; 
    return 0;
}
