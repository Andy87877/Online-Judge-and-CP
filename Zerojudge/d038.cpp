#include <bits/stdc++.h>
#define ll long long
#define Andy8787_want_AC ios::sync_with_stdio(0),cin.tie(0);cout.tie(0);
using namespace std;

int main(){
    ll dp[55] = {0,1,2};
    ll n;
    for( ll i = 3 ; i <= 50 ; i++){
        dp[i] = dp[i-1]+dp[i-2];
    }
    while( cin>>n && n ){
        cout<<dp[n]<<"\n";
    }
    return 0;
}