#include <bits/stdc++.h>
using namespace std;

int main(){
	string str;
	while (getline(cin, str)){
		set<int> se;
		istringstream is(str);
		int n, tt = 0;
		
		while (is >> n){
			se.insert(n);
		}
		
		for (auto i: se){
			tt++;
			
			if (tt != se.size()){
				cout << i << " ";
			} else {
				cout << i;
			}
			
		}
		cout << "\n";
	}
}