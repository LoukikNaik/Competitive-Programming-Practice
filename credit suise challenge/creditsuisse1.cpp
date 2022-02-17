#include <bits/stdc++.h>
#include <string>
#include <iostream>
#define ll long long
using namespace std;

int main() {
    ll t=1;
    while (t--)
    {
        ll n,i,j,k,l,z,an1,an2;
        cin>>n;
        k=n/3;
        i=(k)*2;
        l=n-i;
        i=k+l;
        an1=i;
        //debug(i)
        l=n-k;
        if(l%2==0)
        {
        z=l/2;
        //debug(k+z)
        an2=k+z;
        }
        else
        {
            z=l/2;
            //debug(k+z+1)
            an2=k+z+1;
        }
        cout<<min(an1,an2)<<"\n";
    }
    
    //cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl; 
    return 0;
}
