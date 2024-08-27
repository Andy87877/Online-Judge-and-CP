#include <bits/stdc++.h>
using namespace std;

int main(){
	map<string, int> ma;
	string str;
	
	while (getline(cin, str)){
		string now = "";
		for (int i = 0; i < str.size(); i++){
			if (str[i] == ' '){
				ma[now]++;
				now = "";
				continue;
			}
			now += str[i];
		}
		ma[now]++;
	}
	
	for (auto i: ma){
		cout << i.first << ":" << i.second << "\n";
	}
}