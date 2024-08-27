#include <bits/stdc++.h>
using namespace std;

int main(){
	long long arr_num[6] = {1000, 1024, 1000000, 1024*1024, 1000*1000*1000, 1024*1024*1024};
	char arr_char[6] = {'k', 'K', 'm', 'M', 'g', 'G'};
	
	string str;
	while (cin >> str){
		long long ans = 0, now = 0;
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
		
			if (int(str[i]) >= int('0') && int(str[i]) <= int('9')){
				now *= 10;
				now += int(str[i])-int('0');
			} else {
				for (int j = 0; j < 6; j++){
					if (str[i] == arr_char[j]){
						now *= arr_num[j];
						break;
					}
				}
			}
		}
		
		if (plus){
			ans += now;
		} else {
			ans -= now;
		}
		
		cout << ans << "\n";
	}
}