#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;
#define ll long long
int main() {
    #ifndef ONLINE_JUDGE
    freopen("run/Error.txt", "w",stderr);
    freopen("run/input.txt","r",stdin);
    freopen("run/output1.txt","w",stdout);
    #endif
	int t;
	cin>>t;
	while(t--){
		ll n,m,i,j,k,l;
		cin>>n>>m;
        if(n==1){
            vector<ll> a(m);
            for(i=0;i<m;i++)
            cin>>a[i];
            sort(a.begin(),a.end());
            if(a[0]==a[a.size()-1])
            cout<<"YES\n";
            else
            cout<<"NO\n";
            continue;
        }
        if(m==1){
            vector<ll> a(n);
            for(i=0;i<n;i++)
            cin>>a[i];
            sort(a.begin(),a.end());
            if(a[0]==a[a.size()-1])
            cout<<"YES\n";
            else
            cout<<"NO\n";
            continue;
        }
		vector<vector<int>> vec(n,vector<int>(m));
		for(i=0;i<n;i++){
			for(j=0;j<m;j++){
				cin>>k;
				vec[i][j]=k;
			}
		}
		k=0;
        for(i=0;i<n;i++){
            for(j=0;j<m;j++){
                cerr<<vec[i][j]<<" ";
            }
            cerr<<"\n";
        }
		for(i=0;i<n;i++){
			for(j=0;j<m;j++){
				if(j+1<m && i+1<n){
					if(vec[i][j]!=(vec[i+1][j]+vec[i][j+1]))
					{
						k=1;
						break;
					}
					
				}
				if(j==m-1){
					if(i+1<n){
						if(vec[i][j]!=vec[i+1][j]){
							k=1;
							break;
						}
					}
				}
			}
		}
		if(k==1)
		{
			cout<<"NO\n";
		}
		else
		{
			cout<<"YES\n";
		}

	}
	// Your code here
	return 0;
}