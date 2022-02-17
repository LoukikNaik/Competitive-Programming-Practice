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
    //cout<<"Inventory:\n";
    ll t;
    string arr[50]={"peda","halwa","kaju-katli","rasgulla","jalebi","laddu","jalebi","arsa","gulab-jamun","kewda",
    "balushahi","boondi","ghevar","imarti","khirmohan","motichoor","malpua","nankhatai","petha","phirni",
    "rabri","sheera","son-papdi","cham-cham","amriti","gaja","barfi","kheer","misti","khaja",
    "malai","ras-malai","ras","gulla","gulab","jamun","khir","mohan","lassi","chashni",
    "kulfi","chikki","jaangiri","pongal","kesari-bath","korma","appam","basundi","kaju","katli"};
    for(ll i=0;i<10;i++){
    cout<<"Inventory:\n";
    t=(rand()%50)+1;
    //cout<<t<<"\n";
    for(ll j=0;j<t;j++)
    {
        cout<<arr[j]<<" "<<(rand()%1000000000)+1<<"\n";
    }
    cout<<"Orders-Received:\n";
    t=(rand()%10000000000)+1;
    for(ll j=0;j<t;j++)
    {
        cout<<arr[rand()%50]<<" "<<(rand()%1000000000)+1<<"\n";
    }
    }
	// your code goes here
	return 0;
}
