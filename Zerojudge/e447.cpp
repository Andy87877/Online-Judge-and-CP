// https://zerojudge.tw/ShowProblem?problemid=e447
#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll t, k, x;
queue<ll> que;

int main() {
	cin >> t;
	while (t--) {
		cin >> k;
		if (k == 1) {
			cin >> x;
			que.push(x);
		} else if (k == 2){
            if (que.empty()) {
                cout << "-1\n";
            } else {
                cout << que.front() << "\n";
            }
		} else {
			if (!que.empty()) {
                que.pop();
            }
        }
	}
}