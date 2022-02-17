#include <bits/stdc++.h>
#include <stack>
#include <string>
#include <iostream>
#define ll long long
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
int main() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    fastio
    ll t,v;
    cin>>t;
    v=t;
    while(t--) 
    {
        ll n,i,j,k=0,l=0;
        cin>>n;
        string str;
        cin>>str;
        for(i=0;i<n;i++)
        {
            if(str[i]=='F')
            continue;
            else
            {
                if(str[i]=='O' && l!=1)
                {
                    l=1;
                    k++;
                }
                else if(str[i]=='X' && l!=2)
                {
                    l=2;
                    k++;
                }
            }
        }
        if(k>0)
        k--;
        cout<<"Case #"<<v-t<<": "<<k<<"\n";
        
    }
	// your code goes here
	return 0;
}