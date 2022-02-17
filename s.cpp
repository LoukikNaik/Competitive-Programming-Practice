#include<bits/stdc++.h>	
#define ll long long int
using namespace std;

void calculate(ll arr[],ll n){
		 stack<ll> q;

		 ll e[n+1],b=0;

		
     for (ll i = 0; i <n; i++) {
		 		q.push(arr[i]);
		 }

		 while(q.size()!=1) {
			 ll min=q.top();
			
			e[b]=min;
			b++;
			 q.pop();

			 ll semin=q.top();
			 
				e[b]=semin;
				b++;
			 q.pop();

			 q.push((min+semin)/2);
		 }

		 cout<<q.top()<<endl;

		 for(ll i=0;i<=b;++i){
			 cout<<e[i]<<" ";
			 i++;
			 cout<<e[i]<<endl;
		 }

}

int32_t main(){ 
    #ifndef ONLINE_JUDGE
    freopen("/Users/loukiknaik/Desktop/Contest/run/Error.txt", "w",stderr);
    freopen("/Users/loukiknaik/Desktop/Contest/run/input.txt","r",stdin);
    freopen("/Users/loukiknaik/Desktop/Contest/run/output.txt","w",stdout);
    #endif
    int t;
    cin>>t;
    
		while(t-->0){
      ll n;
			cin>>n;
			ll arr[n];
		

			for (int i = 0; i <n; i++) {
				arr[i]=i+1;
			}

			calculate(arr,n);
		}
  
	
	return 0;
}