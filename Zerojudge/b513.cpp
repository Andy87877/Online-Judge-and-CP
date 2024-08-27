// https://zerojudge.tw/ShowProblem?problemid=b513
#include <bits/stdc++.h>
#define ll long long
using namespace std;

string solve(ll x) {
	if ((x%2 == 0) && (x!=2)) return "N";
	for (ll i = 3; i <= x/2+1; i+=2) {
		if (x%i == 0) return "N";
	}
	return "Y";
}

int main() {
	ll n;
	cin >> n;
	while (n--) {
		ll x;
		cin >> x;
		cout << solve(x) << "\n";
	}
}