vector<ll> prime(n+1,1);
    prime[1]=0;
    for(ll i=2;i<=n;i++){
        if(!prime[i])continue;
        for(ll j=i*i;j<=n;j+=i)
        prime[j]=0;
    }