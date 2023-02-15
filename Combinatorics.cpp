ll fact[N];
ll fastExp(ll p , ll n){
    if(n == 0) return 1  ;
    ll u = fastExp(p , n/2)%mod;
    u = (u*u)%mod;
    if(n&1) u = (u*p)%mod;
    return  u ;
}
ll modInv(ll x){
    return fastExp(x , mod-2)%mod;
}
ll nCr(ll n , ll r){
    if(n < r) re 0 ;
    re ((fact[n] * modInv(fact[n-r]))%mod * modInv(fact[r]))%mod;
}
ll nPr(ll n , ll r){
    if(n < r) re 0 ;
    re fact[n] * modInv(fact[n-r])%mod ;
}
