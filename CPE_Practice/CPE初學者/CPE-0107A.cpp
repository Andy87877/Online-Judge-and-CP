#include <bits/stdc++.h>
using namespace std;

int main(){
	string str;
	while (cin >> str){
		int ans = 0, num = 0, e_num = 0;
		bool plus = true;
		bool flag_e = false;
		
		for (int i = 0; i < str.size(); i++){
			// cout << num << " " << e_num << "  " << ans << "\n";
			// 計算
			if (str[i] == '+' || str[i] == '-'){
				int number = num;
				
				for (int tt = 0; tt < e_num; tt++){
					number *= 10;
				}
				
				if (plus){
					ans += number;
				} else {
					ans -= number;
				}
				
				num = 0;
				e_num = 0;
				flag_e = false;
				if (str[i] == '+'){
					plus = true;
				} else {
					plus = false;
				}
				continue;
			}
			
			if (str[i] == 'e'){ // e_num
				flag_e = true;
				continue;
			}
			
			if (!flag_e){
				num *= 10;
				num += (int(str[i])-int('0'));
			} else {
				e_num *= 10;
				e_num += (int(str[i])-int('0'));
			}
		}
	
		// cout << num << " " << e_num << "  " << ans << "\n";
		int number = num * pow(10,e_num);
		if (plus){
			ans += number;
		} else {
			ans -= number;
		}
		
		cout << ans << "\n";
	}
}