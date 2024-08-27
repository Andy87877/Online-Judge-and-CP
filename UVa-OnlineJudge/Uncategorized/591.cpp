#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, now = 1;
	while(cin >> n) {
		if (n == 0) {
			return 0;
		}
		int arr[n], total = 0, ans = 0;
		for (int i = 0; i < n; i++) {
			cin >> arr[i];
			total += arr[i];
		}	
		
		for (int i = 0; i < n; i++) {
			ans += abs((total/n)-arr[i]);
		}
		
		cout << "Set #" << now << "\n";
		now++;
		cout << "The minimum number of moves is " << ans/2 << ".\n\n";
	}
}