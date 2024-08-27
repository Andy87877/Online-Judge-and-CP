// https://zerojudge.tw/ShowProblem?problemid=e346
#include <bits/stdc++.h>
#define ll long long 
using namespace std;
ll n;

int main() {
	ll n;
	cin >> n;
	ll a[n], dp[n];
	
	cin >> a[0];
	dp[0] = a[0];
	
	for (ll i = 1; i < n; i++) {
		cin >> a[i];
		dp[i] = dp[i-1]+a[i];
	}
	
	ll q;
	cin >> q;
	while (q--) {
		ll l, r;
		cin >> l >> r;
		cout << dp[r-1]-dp[l-1]+a[l-1] << "\n";
	}
}