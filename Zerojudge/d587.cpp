// https://zerojudge.tw/ShowProblem?problemid=d587
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	map<ll,ll> ma;
	ll t, num;
	cin >> t;
	while(t--) {
		cin >> num;
		ma[num]++;
	}
	for (ll i = 1; i <= 3; i++) {
		while (ma[i]--) {
			cout << i << " ";
		}	
	}
}