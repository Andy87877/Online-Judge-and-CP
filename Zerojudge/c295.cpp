// https://zerojudge.tw/ShowProblem?problemid=c295
#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
	int n, m;
	cin >> n >> m;
	int arr[n];
	int ans = 0;
	int temp;
	
	for (int i = 0; i < n; i++) {
		int mx = -1;
		for (int j = 0; j < m; j++) {
			cin >> temp;
			mx = max(mx, temp);
		}
		arr[i] = mx;
		ans += mx;
	}
	cout << ans << "\n";
	
	bool flag = true;
	for (int i = 0; i < n; i++) {
		if (ans%arr[i] == 0) {
			if (!flag) {
				cout << " ";
			} else {
				flag = false;
			}
			cout << arr[i];
		}
	}
	if (flag) cout << -1;
	cout << "\n";
}