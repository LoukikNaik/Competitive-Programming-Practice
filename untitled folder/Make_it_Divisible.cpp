#include <bits/stdc++.h>
#include <string>
#include <iostream>
#define endl "\n"
 
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
typedef long long ll;
using namespace std;


int main() {
    fastio
    ll t;
    cin>>t;
    while(t--)
    {
        ll i,j,k,l,n;
        string s="";
        cin>>n;
        k=3;
        n--;
        s+='3';
        while(n--)
        {
            if(k%3==0 && (k+3)%9!=0)
            {
                s+='3';
                k+=3;
            }
            else
            {
                s+='9';
                k+=9;
            }
        }
        cout<<s<<"\n";
    }
    return 0;
}
