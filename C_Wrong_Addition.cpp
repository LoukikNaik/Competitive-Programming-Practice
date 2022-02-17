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
        ll n,i,j,k,l1,l2,m;
        char digits[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9' };
        string s1,s2,s;
        cin>>s1>>s2;
        l1=s1.length()-1;
        l2=s2.length()-1;
        ll flag=0;
        while(1){
            if(l1<0)
            {
                debug(s2[l2])
                s+=s2[l2];
                l2--;
            }
            else{
                if(s1[l1]>s2[l2]){
                    ll a,b,c;
                    a=s1[l1]-'0';
                    b=s2[l2]-'0';
                    l2--;
                    c=s2[l2]-'0';
                    if(c!=1){
                        flag=1;
                        break;
                    }
                    else{
                        debug(c*10+b-a)
                        int z=c*10+b-a;
                        s+=digits[z];
                    }
                }
                else{
                    ll a,b;
                    a=s1[l1]-'0';
                    b=s2[l2]-'0';
                    debug(b-a)
                    int z=b-a;
                    s+=digits[z];
                }
                l1--;
                l2--;
            }
            if(l2<0 && l1>=0)
            {
                flag=1;
                break;
            }
            if(l1<0 && l2<0)
            {
                break;
            }
        }
        reverse(all(s));
        if(flag==0){
            int z=0;
            for(i=0;i<s.length();i++){
                if(z==0 && s[i]=='0')
                {
                    continue;
                }
                if(s[i]!='0' || z==1)
                {
                    z=1;
                    cout<<s[i];
                }
            }
            cout<<"\n";
        }
        else{
            cout<<-1<<"\n";
        }
    }
    
    cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl; 
    return 0;
}
