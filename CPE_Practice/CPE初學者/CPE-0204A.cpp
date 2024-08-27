#include <bits/stdc++.h>
using namespace std;

int main(){
	string str;
	while (cin >> str){
		int ans = 0, now = 0;
		bool plus = true;
		
		for (int i = 0; i < str.size(); i++){
			if (str[i] == '+' || str[i] == '-'){
				if (plus){
					ans += now;
				} else {
					ans -= now;
				}
				
				
				if (str[i] == '+'){
					plus = true;
				} else {
					plus = false;
				}
				
				now = 0;
				continue;
			}
			
			now *= 10;
			now += int(str[i])-int('0');
		}
		
		if (plus){
			ans += now;
		} else {
			ans -= now;
		}
		
		cout << ans << "\n";
	}
}