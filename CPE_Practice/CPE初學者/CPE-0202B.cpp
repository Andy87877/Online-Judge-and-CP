#include <bits/stdc++.h>
using namespace std;

int main(){
	string str;
	while (getline(cin, str)){
		string ans = "";
		bool flag = true;
		for (int i = 0; i < str.size(); i++){
			if (str[i] == '<'){
				flag = false;
			} else if (str[i] == '>'){
				flag = true;
				continue;
			}
			
			if (flag){
				ans += str[i];
			}
		}
		cout << ans << "\n";
	}
}