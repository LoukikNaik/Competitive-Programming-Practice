#include <bits/stdc++.h>
#include <string>
#include <iostream>
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define endl "\n"
 
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
        /* code */
        ll n,i,j,k,l,m;
        cin>>n;
        string s1,s2,s3="";
        char s[2*n];
        cin>>s1>>s2;
        sort(s1.begin(),s1.end());
        debug(s1)
        sort(s2.begin(),s2.end());
        reverse(s2.begin(),s2.end());
        debug(s2);
        ll leftofs1=0,leftofs2=0,rightofs1=n-1,rightofs2=n-1,leftmostavailable=0,righmostavailable=2*n-1;
        k=0;
        while(1){
            if(k%2==0){
                if(s1[leftofs1]<=s2[leftofs2]){
                    s[leftmostavailable]=s1[leftofs1];
                    leftmostavailable++;
                    leftofs1++;
                }
                else{
                    s[righmostavailable]=s1[rightofs1];
                    righmostavailable--;
                    rightofs1--;
                }
            }
            else{
                if(s2[leftofs2]<s1[leftofs1]){
                    s[righmostavailable]=s2[rightofs2];
                    righmostavailable--;
                    rightofs2--;
                }
                else{
                    s[leftmostavailable]=s2[leftofs2];
                    leftmostavailable++;
                    leftofs2++;
                }
            }
            k++;
            if(k==2*n)
            break;
        }
        for(i=0;i<2*n;i++)
        cout<<s[i];
        cout<<"\n";
    }
    
    cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl; 
    return 0;
}
