#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while (t--){
		int n;
		cin >> n;
		
		int tmp;
		string ans = "";
		for (int i = 0; i < n; i++){
			cin >> tmp;
			if (tmp%2 == 0){
				ans += "偶";
			} else {
				ans += "奇";
			}
		}
		cout << ans << "\n";
	}
}