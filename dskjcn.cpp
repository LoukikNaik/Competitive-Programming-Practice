#include<bits/stdc++.h>
 
using namespace std;
 
typedef long long LL;
const int N=2e5+10;
LL s[N];
void init()
{
    for(int i=0;i<2e5+5;++i) s[i]=0;
}
int main()
{
    #ifndef ONLINE_JUDGE
    freopen("run/Error.txt", "w",stderr);
    freopen("run/output2.txt","r",stdin);
    freopen("run/output1.txt","w",stdout);
    #endif
    ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t;cin>>t;
    while(t--)
    {
        init();
        int n;cin>>n;
        for(int i=1;i<=n;++i) cin>>s[i];
        sort(s+1,s+n+1);
        if(n==1&&s[n]==1)  cout<<"YES"<<endl;
        else if(n==1&&s[n]!=1) cout<<"NO"<<endl;
        else if(s[n]-s[n-1]>=2) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
    return 0;

    cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl;
}