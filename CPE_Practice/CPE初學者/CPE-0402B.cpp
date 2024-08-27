#include <bits/stdc++.h>
using namespace std;

int main(){
	string STR;
	vector<string> vec_str;
	vector<int> vec_total;
	
	while (getline(cin, STR)){
		vec_str.push_back(STR);
	}
	
	for (int i = 0; i < vec_str.size(); i++){
		char s1 = vec_str[i][1], s2 = vec_str[i][4];
		int total = 0;
		
		if (int(s1) >= int('0') && int(s1) <= int('9')){
			total += (int(s1)-int('0'));
		} else if (s1 == 'A'){
			total += 11;
		} else {
			total += 10;
		}
		
		if (int(s2) >= int('0') && int(s2) <= int('9')){
			total += (int(s2)-int('0'));
		} else if (s2 == 'A'){
			total += 11;
		} else {
			total += 10;
		}
		
		vec_total.push_back(total);
	}
	
	for (int i = vec_total.size()-1; i >= 0; i--){
		for (int j = i+1; j < vec_total.size(); j++){
			if (vec_total[j-1] < vec_total[j]){
				swap(vec_total[j-1], vec_total[j]);
				swap(vec_str[j-1], vec_str[j]);
			}
		}
	}
	
	for (int i = 0; i < vec_str.size(); i++){
		cout << vec_str[i] << "\n";
	}
}

