#include <bits/stdc++.h>
using namespace std;

int main(){
	string str;
	while(getline(cin, str)){
		set<int> se;
		istringstream is(str);
		int num, tt = 0;
		
		while (is >> num){
			se.insert(num);
		}
		
		for (auto i: se){
			tt++;
			cout << i;
			if (tt != se.size()){
				cout << " ";
			}
		}
		cout << "\n";
	}
}