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
        ll n,i,j,a,b,l,m,k;
        cin>>n;
        ll X[n],Y[n];
        for(i=0;i<n;i++)
        cin>>X[i]>>Y[i];
        k=0;
        for(i=0;i<n-3;i++)
        {
            for(j=i+1;j<n-2;j++)
            {
                for(a=j+1;a<n-1;a++)
                {
                    for(b=a+1;b<n;b++)
                    {
                        //cout<<i+1<<" "<<j+1<<" "<<a+1<<" "<<b+1<<"\n";
                        float x1,x2,x3,x4,y1,y2,y3,y4,x,y,d1,d2,d3,d4;
                        x1=X[i];
                        y1=Y[i];
                        x2=X[j];
                        y2=Y[j];
                        x3=X[a];
                        y3=Y[a];
                        x4=X[b];
                        y4=Y[b];
                        x=(x1+x2+x3+x4)/4;
                        y=(y1+y2+y3+y4)/4;
                        //cout<<x<<" "<<y<<"\n";
                        d1=(x1-x)*(x1-x)+(y1-y)*(y1-y);
                        d2=(x2-x)*(x2-x)+(y2-y)*(y2-y);
                        d3=(x3-x)*(x3-x)+(y3-y)*(y3-y);
                        d4=(x4-x)*(x4-x)+(y4-y)*(y4-y);
                        //cout<<d1<<d2<<d3<<d4<<"\n";
                        if(d1==d2 && d1==d3 && d1==d4)
                        {
                            if(y1==y2 || y1==y3 || y1==y4)
                            k++;
                        }
                    }
                }
            }
        }
        cout<<k<<"\n";
    return 0;
}
