// https://zerojudge.tw/ShowProblem?problemid=b837
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
	vector<ll> vec;
	
	vec.push_back(0);
	vec.push_back(1);
	
	ll a,b;
	cin >> a >> b;
	if (a > b) swap(a,b);
	while(vec[vec.size()-1] <= b) {
		vec.push_back(vec[vec.size()-1]+vec[vec.size()-2]);
		if (b < vec[vec.size()-1]) {
			break;
		}
	}
	
	ll total = 0;
	for (auto i: vec) {
		if (i >= a && i <= b) {
			cout << i << "\n";
			total++;
		}
	}
	cout << total;
}

int main() {
	ll t;
	cin >> t;
	while(t--) {
		solve();
        cout << "\n";
        if (t != 0) {
            cout << "------\n";
        }
	}
}