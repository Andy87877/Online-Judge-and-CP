// https://zerojudge.tw/ShowProblem?problemid=c061
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	ll n,m;
	while (cin >> n >> m) {
		if (n==0) break;
		
		if (n-m < m) {
			m = n-m;
		}
		
		ll ans = 1;
		for (ll i = 1; i <= m; i++) {
			ans *= n-i+1;
			ans /= i;
		}
		cout << ans << "\n";	
	}
	
}