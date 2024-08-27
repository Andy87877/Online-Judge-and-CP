#include <bits/stdc++.h>
using namespace std;

int main(){
	string str;
	while (getline(cin, str)){
		vector<string> vec;
		string s;
		istringstream is(str);
		
		while (is >> s){
			vec.push_back(s);
		}
		
		for (int i = 0; i < vec.size(); i++){
			for (int j = i+1; j < vec.size(); j++){
				if (vec[i].size() < vec[j].size()){
					swap(vec[i], vec[j]);
				}
				if (vec[i].size() == vec[j].size() && vec[i] != vec[j]){
					map<string, int> ma;
					ma[vec[i]]++; ma[vec[j]]++;
					int aaaa = 0;
					for (auto tttt: ma){
						if (aaaa == 0){
							vec[i] = tttt.first;
							aaaa++;
						} else {
							vec[j] = tttt.first;
						}
					}
				}
			}
		}
		
		for (int i = 0; i < vec.size()-1; i++){
			cout << vec[i] << " ";
		}
		cout << vec[vec.size()-1] << "\n";
	}
}