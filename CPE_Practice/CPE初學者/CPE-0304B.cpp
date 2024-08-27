#include <bits/stdc++.h>
using namespace std;

int main(){
	string str;
	while (getline(cin, str)){
		map<string, int> ma;
		vector<string> vec;
		string s;
		istringstream is(str);
		
		while (is >> s){
			ma[s]++;
			if (ma[s] == 1){
				vec.push_back(s);
			}
		}
		
		for (int i = 0; i < vec.size(); i++){
			for (int j = i+1; j < vec.size(); j++){
				if (vec[i].size() < vec[j].size()){
					swap(vec[i], vec[j]);
				}
				
				if (vec[i].size() == vec[j].size()){
					map<string, int> check_ma;
					check_ma[vec[i]]++; check_ma[vec[j]]++;
					
					int tttt = 0;
					for (auto maaaa: check_ma){
						if (tttt == 0){
							vec[i] = maaaa.first;
							tttt = 1;
						} else {
							vec[j] = maaaa.first;
						}
					}
					
				}
			}
		}
	
		for (int i = 0; i < vec.size(); i++){
			cout << vec[i] << ":" << ma[vec[i]] << "\n";
		}
	}
}