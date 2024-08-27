#include <bits/stdc++.h>
using namespace std;

int n, m, a, b;
bool solve(int n) {
	map<int, bool> ma;
	cin >> m;
	vector<vector<int>> vec(n+1);
	
	for (int t = 0; t < m; t++) {
		cin >> a >> b;
		vec[a].push_back(b);
	}
	
	cin >> a >> b;
	if (a == b) {
		return true;
	}
	
	queue<int> ans;
	ans.push(a);
	
	while (!ans.empty()) {
		// cout << ans.front() << ": ";
		for (int i: vec[ans.front()]) {
			// cout << i << " ";
			if (i == b) {
				return true;
			} 
			if (!ma[i]) {
				ma[i] = 1;
				ans.push(i);
			}
		}
		ans.pop();
		// cout << "\n";
	}
	
	return false;
}

int main() { 
	ios::sync_with_stdio(0),cin.tie(0);cout.tie(0);
	while (cin >> n){
		if (solve(n)) {
			cout << "Yes!!!\n";
		} else {
			cout << "No!!!\n";
		}
	}
}

/*
把每個能走到的都走過
map 存是否走過
*/