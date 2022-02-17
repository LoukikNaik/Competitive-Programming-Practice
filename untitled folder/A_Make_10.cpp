#include<bits/stdc++.h>
#include <stack>
#include <string>
#include <iostream>
#define ll long long
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
int main() {
    #ifndef ONLINE_JUDGE
    //freopen("Error.txt", "w",stderr);
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
fastio
ll n,i,j,k,l,z,f;
cin>>n;
ll n1,n2,n3;
while(n--)
{
    cin>>n1>>n2>>n3;
    if(n1==0 && n2==0 && n3==0)
    {cout<<0<<"\n";continue;}
    if(n1==0 && n3==0)
    {cout<<0<<"\n";continue;}
    if(n2==0 && n1==0)
    {cout<<0<<"\n";continue;}
    if(n2==0 && n3==0)
    {cout<<n1/5<<"\n";continue;}
    if(n1==0)
    {cout<<min(n2/2,n3)<<"\n";continue;}
    if(n2==0)
    {
        l=min(n1/3,n3);
        //cout<<l<<" ";
        k=n1-l*3;
        z=n3-l;
        if(k>z/2){
        z=z/2;
        k=(k-z)/5;
        l+=(k+z);
        }
        else
        l+=k;
        if(n1>n3/2)
        {
            n3=n3/2;
            n1=(n1-n3)/5;
            cout<<max(l,(n3+n1))<<"\n";
        }
        else
        {
            cout<<max(l,n1)<<"\n";
        }
        continue;
    }
    if(n3==0)
    {
        if(n1/2>n2/2)
        {
            n3=n1/2;
            n2=n2/2;
            n1=(n1-2*n2)/5;
            cout<<n2+n1<<"\n";
        }
        else
        {
            cout<<n1/2<<"\n";
        }

    }
    else
    {
        f=0;
        f+=min(n2/2,n3);
        n2-=f*2;
        n3-=f;
        
    }
}

// your code goes here
return 0;
}