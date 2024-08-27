// https://zerojudge.tw/ShowProblem?problemid=g308
#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, t;
	cin >> n >> t;
	
	int num[n] ,food[n];
	for (int i = 0; i < n; i++) {
		cin >> num[i];
	} 
	for (int i = 0; i < n; i++) {
		cin >> food[i];
	} 
	
	int ans = 0;
	while (food[t] != -1) {
		//cout << t << "\n";
		if (food[t] == 1) ans++;
		food[t] = -1;
		t = num[t];
	} 
	cout << ans << "\n";
}
