#include<bits/stdc++.h>
#define ll long long int
using namespace std;
  
int main() {
    #ifndef ONLINE_JUDGE
    freopen("/Users/loukiknaik/Desktop/Contest/run/Error.txt", "w",stderr);
    freopen("/Users/loukiknaik/Desktop/Contest/run/input.txt","r",stdin);
    freopen("/Users/loukiknaik/Desktop/Contest/run/output1.txt","w",stdout);
    #endif
    ll n;cin>>n;

    vector<string> s1(n),s2(n);

    for (int i = 0; i <n; i++) {
      cin>>s1[i]>>s2[i];
    }

    ll c=0;
    for (int i = 0; i < n; i++) {
      for(int j=i+1;j<n;j++) {
        if(s1[i]==s1[j] and s2[i]==s2[j]){
            c=1;
            break;
        }
      }
      if(c==1)
      break;
    }
 
    if(c) {
      cout<<"Yes"<<endl;
    }else{
      cout<<"No"<<endl;
    }
  
  return 0;
}