// https://zerojudge.tw/ShowProblem?problemid=g498
#include <bits/stdc++.h>
#define ll long long
using namespace std;

string solve() {
	ll n,m,d, idk;
	cin >> n >> m >> d;
	idk = d;
	if (n < m) swap(n,m);
	
	if (m > d) return "NO";
	if (!(d%n) || !(d%m)) return "YES";
	for (ll i = 0 ; i < idk/n; i++) {
		d -= n;
		if (!(d%m)) return "YES";
	}
	return "NO";
}


int main (){
	cout << solve() << "\n";
}