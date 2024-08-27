#include <bits/stdc++.h>
using namespace std;

int main(){
	string str;
	while (getline(cin, str)){
		int ans = 0, now = 0;
		for (int i = 0; i < str.size(); i++){
			if (str[i] == ' '){
				ans += now;
				now = 0;
				continue;
			}
			
			now *= 10;
			now += int(str[i])-int('0');
		}
		ans += now;
		
		cout << ans << "\n";
	}
}