#include <bits/stdc++.h>
#include <string>
#include <iostream>
#define ll long long
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
int main() {
    // #ifndef ONLINE_JUDGE
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    // #endif
    fastio
        ll t;
        cin>>t;
        while(t--){
            ll n,i,j,k,l,z;
            cin>>n;
            map<char,ll> m;
            m['d']=1;
            m['f']=1;
            m['j']=2;
            m['k']=2;
            l=0;
            map<string,ll> m1;
            while(n--){
                string str;
                k=0;
                z=0;
                cin>>str;
                if(m1[str]>0)
                {
                    l+=m1[str]/2;
                    //cout<<m1[str]/2<<"\n";
                    continue;
                }
                for(i=0;i<str.length();i++)
                {
                    //cout<<k<<" ";
                    if(i==0)
                    {
                        l+=2;
                        z+=2;
                        k=m[str[i]];
                        continue;
                    }
                    if(m[str[i]]==k)
                    {
                        l+=4;
                        z+=4;
                    }
                    else
                    {
                        k=m[str[i]];
                        l+=2;
                        z+=2;
                    }
                }
                //cout<<z<<"\n";
                m1[str]=z;
                //cout<<l<<"\n";
            }
            cout<<l<<"\n";
        }
    return 0;
}
