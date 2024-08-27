// https://zerojudge.tw/ShowProblem?problemid=b969
#include <bits/stdc++.h>
using namespace std;

int main() {
	stringstream ss;
	string s, b, temp;
	getline(cin, s);
	getline(cin, b);
	
	ss << s;
	while (ss >> temp) {
		cout << b << ", " << temp << "\n";
	}
}