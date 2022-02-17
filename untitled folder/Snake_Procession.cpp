#include <bits/stdc++.h>
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
        ll t;
        cin>>t;
        while(t--)
        {
            ll n,i,j,k,l;
            cin>>n;
            string str;
            cin>>str;
            vector<char> vec;
            for(i=0;i<n;i++)
            {
                if(str[i]=='.')
                continue;
                else
                vec.push_back(str[i]);
            }
            if(vec.size()==0)
            cout<<"Valid\n";
            else if(vec.size()%2==1)
            cout<<"Invalid\n";
            else{
                k=0;
                l=0;
                for(i=0;i<vec.size();i++)
                {
                    if(vec[i]=='H'){
                    if(k==0)
                    {
                        k=1;
                        continue;
                    }
                    else
                    {
                        l=1;
                        break;
                    }
                    }
                    if(vec[i]=='T'){
                    if(k==1)
                    {
                        k=0;
                        continue;
                    }
                    else
                    {
                        l=1;
                        break;
                    }}
                }
                if(l==0)
                cout<<"Valid\n";
                else
                cout<<"Invalid\n";
            }
        }
    return 0;
}
