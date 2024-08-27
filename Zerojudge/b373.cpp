// https://zerojudge.tw/ShowProblem?problemid=b373
#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, total = 0;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	} 
	
	for (int i = 0; i < n; i++) {
		for (int j = i+1; j < n; j++) {
			if (a[i] > a[j]) {
				swap(a[i],a[j]);
				total++;
			}
		}
	}
	cout << total; 
}