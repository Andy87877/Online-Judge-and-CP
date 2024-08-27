// https://zerojudge.tw/ShowProblem?problemid=b764
#include <bits/stdc++.h>
using namespace std;

int main() {
	string bit[12] = {"00","01","100","101","1100","1101","11100","11101","111100","111101","111110","111111"};
	char st[12] = {'A','B','0','1','2','3','4','5','6','7','8','9'};
	
	int n;
	while (cin >> n){
	string s;
	while (n--) {
		cin >> s;
		string temp = "";
		int check = 0;
		for (int i = 0 ; i < s.size(); i++) {
			temp += s[i];
			for (int j = 0; j < 12; j++) {
				if (bit[j] == temp && check == 4) cout << ",";
				if (bit[j] == temp) {
					cout << st[j];
					check++;
					temp = "";
					break;
				}
			}
		}
		cout << "\n";
	}
	}
}
