#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	while (cin >> n){
		if (n == 0){
			return 0;
		}
		
		if (n%2 == 0){
			cout << "偶\n";
		} else {
			cout << "奇\n";
		}
	}
}