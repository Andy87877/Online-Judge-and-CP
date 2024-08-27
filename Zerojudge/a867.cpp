// https://zerojudge.tw/ShowProblem?problemid=a867
#include <bits/stdc++.h>
using namespace std;

int main() {
	char arr[17][32] = {'.'};
	for (int i = 1; i < 16; i++) {
		for (int j = 1; j < 31; j++) {
			cin >> arr[i][j];
		}
	}
	
	for (int i = 1; i < 16; i++) {
		for (int j = 1; j < 31; j++) {
			if (arr[i][j] == '.') {
				int temp = 0;
				if (arr[i+1][j+1] == '*')	{
					temp++;
				}
				if (arr[i+1][j] == '*')	{
					temp++;
				}
				if (arr[i+1][j-1] == '*')	{
					temp++;
				}
				if (arr[i][j+1] == '*')	{
					temp++;
				}
				if (arr[i][j-1] == '*')	{
					temp++;
				}
				if (arr[i-1][j+1] == '*')	{
					temp++;
				}
				if (arr[i-1][j] == '*')	{
					temp++;
				}
				if (arr[i-1][j-1] == '*')	{
					temp++;
				}
				if (temp) {
					arr[i][j] = char(temp+48);
				}
			}
		}
	}
	
	for (int i = 1; i < 16; i++) {
		for (int j = 1; j < 31; j++) {
			cout << arr[i][j];
		}
		cout << "\n";
	}
}