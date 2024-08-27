#include <bits/stdc++.h>
using namespace std;

int main(){
	string str;
	bool flag = true; // true input / false check
	map<string, int> ma;
	while (cin >> str){
		if (str == "#"){
			flag = false;
			continue;
		}
		
		if (flag){
			ma[str]++;
		} else {
			if (ma[str] != 0){
				cout << "YES\n";
			} else {
				cout << "NO\n";
			}
		}
	}
}