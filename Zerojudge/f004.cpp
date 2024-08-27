// https://zerojudge.tw/ShowProblem?problemid=f004
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	ll n, arr[7] = {1000,500,100,50,10,5,1};
	while (cin >> n) {
		cout << n << " = ";
		bool flag = false;
		
		for (ll i = 0; i < 7; i++) {
			if (n/arr[i] != 0) {
				if (flag) {
					cout << " + " << arr[i] << "*" << n/arr[i];
				} else {
					cout << arr[i] << "*" << n/arr[i];
					flag = true;
				}
			}
			n -= arr[i]*(n/arr[i]);
		}
		cout << "\n";
	}
}