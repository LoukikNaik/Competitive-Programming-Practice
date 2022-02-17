#include <bits/stdc++.h>
#include <string>
#include <iostream>
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define endl "\n"

typedef long long ll;
typedef unsigned long long ull;
typedef long double lld;

using namespace std;

#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

queue<pair<ll, ll> > s1;
vector<vector<int> > m1i,m2,m1j;
vector<vector<char> > arr;
vector<vector<int> > vis;

void printB(ll n,ll i, ll j){
    string s="";
    ll a=n;
    ll i1,j1,i2,j2;
    i1=i;
    j1=j;
    while(n--)
    {
        i2=m1i[i1][j1];
        j2=m1j[i1][j1];
        //debug(i2)
        //debug(j2)
        if(i2-i1==1)
        {
            s+='U';
            i1=i2;
        }
        else if(i2-i1==-1)
        {
            s+='D';
            i1=i2;
        }
        if(j2-j1==1)
        {
            s+='L';
            j1=j2;
        }
        else if(j2-j1==-1)
        {
            s+='R';
            j1=j2;
        }
        //debug(s)
    }
    std::cout<<"YES\n";
    std::cout<<a<<"\n";
    reverse(s.begin(), s.end());
    std::cout<<s<<"\n";
    cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl; 
    exit(0);
}

void traverse(ll i,ll j,ll n,ll m){
    vis[i][j]=1;
    //debug(i)
    //debug(j)
    //debug(vis)
    if(i+1<n){
        if(vis[i+1][j]==0 && arr[i+1][j]=='.')
        {
            vis[i+1][j]=1;
            s1.push(mp(i+1,j));
            m1i[i+1][j]=i;
            m1j[i+1][j]=j;
            m2[i+1][j]=m2[i][j]+1;
        }
        else if(arr[i+1][j]=='B')
        {
            vis[i+1][j]=1;
            s1.push(mp(i+1,j));
            //debug(m2[mp(i+1,j)])
            m1i[i+1][j]=i;
            m1j[i+1][j]=j;
            m2[i+1][j]=m2[i][j]+1;
            printB(m2[i+1][j],i+1,j);
        }
    }
    if(j+1<m){
        if(vis[i][j+1]==0 && arr[i][j+1]=='.')
        {
            vis[i][j+1]=1;
            s1.push(mp(i,j+1));
            m1i[i][j+1]=i;
            m1j[i][j+1]=j;
            m2[i][j+1]=m2[i][j]+1;
        }
        else if(arr[i][j+1]=='B')
        {
            vis[i][j+1]=1;
            s1.push(mp(i,j+1));
            //debug(m2[mp(i,j+1)])
            m1i[i][j+1]=i;
            m1j[i][j+1]=j;
            m2[i][j+1]=m2[i][j]+1;
            printB(m2[i][j+1],i,j+1);
        }
    }
    if(i-1>=0){
        if(vis[i-1][j]==0 && arr[i-1][j]=='.')
        {
            vis[i-1][j]=1;
            s1.push(mp(i-1,j));
            m1i[i-1][j]=i;
            m1j[i-1][j]=j;
            m2[i-1][j]=m2[i][j]+1;
        }
        else if(arr[i-1][j]=='B')
        {
            vis[i-1][j]=1;
            s1.push(mp(i,j+1));
            //debug(m2[mp(i-1,j)])
            m1i[i-1][j]=i;
            m1j[i-1][j]=j;
            m2[i-1][j]=m2[i][j]+1;
            printB(m2[i-1][j],i-1,j);
        }
    }
    if(j-1>=0){
        if(vis[i][j-1]==0 && arr[i][j-1]=='.')
        {
            vis[i][j-1]=1;
            s1.push(mp(i,j-1));
            m1i[i][j-1]=i;
            m1j[i][j-1]=j;
            m2[i][j-1]=m2[i][j]+1;
        }
        else if(arr[i][j-1]=='B')
        {
            vis[i][j-1]=1;
            s1.push(mp(i,j+1));
            //debug(m2[mp(i,j-1)])
            m1i[i][j-1]=i;
            m1j[i][j-1]=j;
            m2[i][j-1]=m2[i][j]+1;
            printB(m2[i][j-1],i,j-1);
        }
    }
    // if(i+1<n)
    // if(vis[i+1][j]==0 && arr[i+1][j]=='B')
    // {
    //     vis[i+1][j]=1;
    //     s1.push(mp(i+1,j));
    //     //debug(m2[mp(i+1,j)])
    //     m1i[i+1][j]=i;
    //     m1j[i+1][j]=j;
    //     m2[i+1][j]=m2[i][j]+1;
    //     printB(m2[i+1][j],i+1,j);
    // }
    // if(j+1<m)
    // if(vis[i][j+1]==0 && arr[i][j+1]=='B')
    // {
    //     vis[i][j+1]=1;
    //     s1.push(mp(i,j+1));
    //     //debug(m2[mp(i,j+1)])
    //     m1i[i][j+1]=i;
    //     m1j[i][j+1]=j;
    //     m2[i][j+1]=m2[i][j]+1;
    //     printB(m2[i][j+1],i,j+1);
    // }
    // if(i-1>=0)
    // if(vis[i-1][j]==0 && arr[i-1][j]=='B')
    // {
    //     vis[i-1][j]=1;
    //     s1.push(mp(i,j+1));
    //     //debug(m2[mp(i-1,j)])
    //     m1i[i-1][j]=i;
    //     m1j[i-1][j]=j;
    //     m2[i-1][j]=m2[i][j]+1;
    //     printB(m2[i-1][j],i-1,j);
    // }
    // if(j-1>=0)
    // if(vis[i][j-1]==0 && arr[i][j-1]=='B')
    // {
    //     vis[i][j-1]=1;
    //     s1.push(mp(i,j+1));
    //     //debug(m2[mp(i,j-1)])
    //     m1i[i][j-1]=i;
    //     m1j[i][j-1]=j;
    //     m2[i][j-1]=m2[i][j]+1;
    //     printB(m2[i][j-1],i,j-1);
    // }
    
}

int main() {
    #ifndef ONLINE_JUDGE
    freopen("Error.txt", "w",stderr);
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    fastio
    ll n,m,i,j,i1,i2,l;
    cin>>n>>m;
    char k;
    vis.resize(n);
    arr.resize(n);
    m1i.resize(n);
    m1j.resize(n);
    m2.resize(n);
    for(i=0;i<n;i++)
    {
        m1i[i].resize(m);
        m1j[i].resize(m);
        m2[i].resize(m,0);
        vis[i].resize(m,0);
        arr[i].resize(m);
        for(j=0;j<m;j++)
        {
            cin>>k;
            arr[i][j]=k;
            if(k=='A')
            {
                i1=i;
                i2=j;
            }
        }
    }
    //debug(arr);
    s1.push(mp(i1,i2));
    while(!s1.empty())
    {
        i1=s1.front().first;
        i2=s1.front().second;
        s1.pop();
        traverse(i1,i2,n,m);
    }
    std::cout<<"NO\n";
    //debug(arr)
    //debug(vis)
    cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl; 
    return 0;
}
