#include <bits/stdc++.h>
using namespace std;

int main(){
	string arr[12] = {"Jan","Feb","Mar","Apr","May","Jun","Jul","Aug","Sep","Oct","Nov","Dec"};
	
	string str;
	getline(cin, str);
	
	while (getline(cin, str)){
		string a,b;
		bool flag = true;
		
		for (int i = 0; i < str.size(); i++){
			if (str[i] == ' '){
				flag = false;
				continue;
			}
			
			if (flag){
				a += str[i];
			} else {
				b += str[i];
			}
		}
		
		if (int(a[0]) >= int('0') && int(a[0]) <= int('9')){
			cout << a << " " << b << "\n";
			continue;
		}
		
		for (int i = 0; i < 12; i++){
			if (a == arr[i]){
				cout << i+1 << " ";
				break;
			}
		}
		cout << b << "\n";
	} 
}

