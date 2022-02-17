#include<bits/stdc++.h>
#include <stack>
#include <string>
#include <iostream>
#define ll long long
#define pb push_back
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
int main() {
    fastio
    string str;
    cin>>str;
    map<string,ll> m;
    set<string> s1;
    
    if(str=="Inventory:")
    {
        string s;
        while(cin>>s){
            if(s=="Orders-Received:")
            break;
            else
            {
                ll n,i,j,k,l;
                cin>>n;
                s1.insert(s);
                m[s]+=n;
            }
        }
        while(cin>>s)
        {
            ll n;
            cin>>n;
            s1.insert(s);
            m[s]-=n;
        }
        set<string>::iterator itr;
        for(itr=s1.begin();itr!=s1.end();itr++)
        {
            if(m[*itr]<0)
            {
                cout<<*itr<<" "<<abs(m[*itr])<<"\n";
            }
        }
    }
	// your code goes here
	return 0;
}
