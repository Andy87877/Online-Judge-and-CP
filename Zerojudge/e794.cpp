// https://zerojudge.tw/ShowProblem?problemid=e794
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	ll n;
	cin >> n;
	n += 2;
	ll a[n] = {0,1};
	for (ll i = 2; i < n; i++) {
		a[i] = a[i-2]+a[i-1];
	}
	ll gcd = __gcd(a[n-2],a[n-1]);
	cout << a[n-2]/gcd << ":" << a[n-1]/gcd;
}