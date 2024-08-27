// https://zerojudge.tw/ShowProblem?problemid=a130
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
	string str[10];
	ll num[10] , mx = -1;
	for (ll i = 0; i < 10; i++) {
		cin >> str[i] >> num[i];
		if (mx < num[i]) mx = num[i];
	}
	
	for (ll i = 0; i < 10; i++) {
		if (mx == num[i]) {
			cout << str[i] << "\n";
		}
	}
}

int main() {
	ll t;
	cin >> t;
	for (ll i = 1; i <= t; i++) {
		cout << "Case #" << i << ":\n";
		solve();
	}
} 