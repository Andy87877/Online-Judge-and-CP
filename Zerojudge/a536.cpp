// https://zerojudge.tw/ShowProblem?problemid=a536
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	ll n;
	cin >> n;
	while (n--) {
		ll e,f,c, ans = 0;
		cin >> e >> f >> c;
		e += f;
		while (e >= c) {
			ans++;
			e-=c;
			e++;
		}
		cout << ans << "\n";
	}
}