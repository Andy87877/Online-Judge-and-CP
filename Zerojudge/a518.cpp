// https://zerojudge.tw/ShowProblem?problemid=a518
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	ll a,b;
	while (cin >> a >> b) {
		if (a+b == -2) break;
		if (a < b) swap(a,b);
		if (a-b > 50) cout << 100-(a-b) << "\n"; 
		else cout << a-b << "\n";
	}
}