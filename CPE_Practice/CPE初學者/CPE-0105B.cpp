/*
9*11
9:  相加%9 == 0
11: 奇偶數差%11 == 0
*/
#include <bits/stdc++.h>
using namespace std;

int main(){
	string str;
	
	while (cin >> str){
		if (str == "0") return 0;
		
		int a = 0,b = 0; // 奇偶
		for (int i = 0; i < str.size(); i++){
			if (i%2 == 0){
				a += (int(str[i])-int('0'));
			} else {
				b += (int(str[i])-int('0'));
			}
		}
		
		if ((a+b)%9 == 0 && abs(a-b)%11 == 0){
			cout << "YES\n";
		} else {
			cout << "NO\n";
		}
		
	}
}
