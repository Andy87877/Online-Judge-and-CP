#include <bits/stdc++.h>
using namespace std;

int main(){
	string str;
	while (getline(cin, str)){
		int ans = 1;
		for (int i = 0; i < str.size(); i++){
			if (str[i] == ' '){
				ans++;
			}
		}
		
		cout << ans << "\n";
	}
}