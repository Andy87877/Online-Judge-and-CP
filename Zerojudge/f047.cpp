// https://zerojudge.tw/ShowProblem?problemid=f047
#include <bits/stdc++.h>
using namespace std;
stringstream ss;
string str, temp;

int main() {
	int i = 0;
	string ans[3];
	
	getline(cin, str);
	ss << str;
	
	while (ss >> temp) {
		// cout << temp << " ";
		ans[i%3] += temp;
		ans[i%3] += " ";
		i++;
	}
	for (auto i: ans) {
		cout << i << "\n";
	}
}