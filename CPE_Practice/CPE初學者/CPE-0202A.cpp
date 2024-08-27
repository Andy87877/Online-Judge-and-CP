#include <bits/stdc++.h>
using namespace std;

int main(){
	string str;
	while (getline(cin, str)){
		for (int i = 0; i < str.size(); i++){
			if ((int(str[i]) >= int ('a')) && (int(str[i]) <= int ('z'))){
				str[i] = char(int(str[i])-32);
			} else if ((int(str[i]) >= int ('A')) && (int(str[i]) <= int ('Z'))){
				str[i] = char(int(str[i])+32);
			}
		}
		
		cout << str << "\n";
	}
}