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


int main() {
    
    fastio
    ll t;
    cin>>t;
    while (t--)
    {
        /* code */
        ll n,i,j,k,l,m,leftmostn=-1,rightmostn=-1,leftmostS=-1,rightmosts=-1;
        cin>>n;
        string s;
        vector<ll> a(n),b(n),v;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            b[i]=a[i];
        }
        cin>>s;
        k=0;
        if(s[0]=='N')
        {
            leftmostn=0;
            rightmostn=0;
        }
        else{
            leftmostS=0;
            rightmosts=0;
        }
        for(i=1;i<n;i++){
            if(s[i]!=s[i-1])
            k++;
            if(s[i]=='N' && leftmostn==-1)
            leftmostn=i;
            if(s[i]=='S' && leftmostS==-1)
            leftmostS=i;
            if(s[i]=='N')
            rightmostn=i;
            if(s[i]=='S')
            rightmosts=i;
        }
        sort(all(b));
        for(i=0;i<n;i++){
            if(a[i]!=b[i])
            v.pb(i);
        }
        if(v.size()==0)
        cout<<0<<"\n";
        else{
            if(k==0)
            {
                cout<<-1<<"\n";
                continue;
            }
            if(s[v[0]]!=s[v[v.size()-1]] || s[0]!=s[n-1] || (leftmostS<=v[0] && rightmostn>=v[v.size()-1]) || (leftmostn<=v[0] && rightmosts>=v[v.size()-1]))
            cout<<1<<"\n";
            else
            cout<<"2\n";
        }
    }
    
    cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl; 
    return 0;
}
