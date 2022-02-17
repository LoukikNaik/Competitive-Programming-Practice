#include<bits/stdc++.h>
using namespace std;

// int l,z;

void generate_brackets(char out[],int n, int idx,int open,int close){
  
  if(idx==2*n){
    // if(l==z)
    // return;
    out[idx]='\0';
    cout<<out<<endl;
    // l++;
    return;
  }
//   if(l==z)
//   retiiurn;
    // debug(out)
  if(open<n){
    generate_brackets(out,n,idx+1,open+1,close);
    out[idx]='(';
  }
  if(close<open){
    out[idx]=')';
    generate_brackets(out,n,idx+1,open,close+1);
  }
  return;
}

int main() {
    
  int t;
  cin>>t;
  while(t--){
    int n;
  cin>>n;
//   l=0;
//   z=n;
  char out[1000];
  int idx =0;
  generate_brackets(out,n,0,0,0);
  }
  
  return 0;
}