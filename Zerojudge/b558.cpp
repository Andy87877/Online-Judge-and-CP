#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ll n;
    while (cin >> n) {
    	ll arr[n+2];
	    arr[0] = 1;
	    for (int i = 1; i <= n; i++) {
			arr[i] = arr[i-1]+i-1;
		}
		cout << arr[n] << "\n";	
    }
}