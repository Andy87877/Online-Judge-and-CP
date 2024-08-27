#include <bits/stdc++.h>
using namespace std;

int main(){
	string str;
	while (getline(cin, str)){
		string now = "";
		int ans = 0;
		for (int i = 0; i < str.size(); i++){
			if (str[i] == ','){
				if (now != ""){
					ans++;
				}
				now = "";
				continue;
			}
			
			now += str[i];
		}
		
		if (now != ""){
			ans++;
		}
	
		cout << ans << "\n";
	}
}