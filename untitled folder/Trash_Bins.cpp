#include<bits/stdc++.h>
#include <stack>
#include <string>
#include <iostream>
#define ll long long
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
int main() {
    #ifndef ONLINE_JUDGE
    freopen("Error.txt", "w",stderr);
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    fastio
    ll t,f;
    cin>>t;
    f=t;
    while(t--)
    {
        ll n,i,j,k,l,z1,z2;
        cin>>n;
        string str;
        cin>>str;
        l=0;
        k=-1;
        vector<ll> vec;
        for(i=0;i<n;i++)
        {
            if(str[i]=='1')
            vec.push_back(i);
        }
        j=0;
        z1=vec[0];
        z2=vec[vec.size()-1];

        k=vec.size()-1;
        vector<ll> vec1(n,0);
        for(i=z1+1;i<n;i++)
        {
            if(str[i]=='0')
            {
                vec1[i]=(i-vec[j]);
            }
            else
            {
                if(j+1<vec.size())
                j++;
            }
        }
        for(i=z2-1;i>=0;i--)
        {
            if(str[i]=='0')
            {
                if(vec1[i]!=0)
                vec1[i]=min(vec1[i],vec[k]-i);
                else
                vec1[i]=vec[k]-i;
            }
            else
            {
                if(k-1>=0)
                k--;
            }
        }
        l=0;
        for(i=0;i<n;i++)
        {
            l+=vec1[i];
        }
        cout<<"Case #"<<f-t<<": "<<l<<"\n";
    }
    return 0;
}
