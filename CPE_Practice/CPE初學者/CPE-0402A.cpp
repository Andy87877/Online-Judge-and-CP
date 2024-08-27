#include <bits/stdc++.h>
using namespace std;

int main(){
	string strin;
	while (getline(cin, strin)){
		vector<string> vec, big_vec;
		istringstream is(strin);
		string s;
		
		while (is >> s){
			vec.push_back(s);
		}
		
		for (int i = 0; i < vec.size(); i++){
			string str = vec[i];
			for (int j = 0; j < str.size(); j++){
				if (((int(str[j]) >= int('a')) && (int(str[j]) <= int('z')))){
					str[j] = char(int(str[j])-32);
				}
			}
			big_vec.push_back(str);
		}
		
		// vs. big_vec
		for (int i = 0; i < vec.size(); i++){
			for (int j = 1; j < vec.size(); j++){
				string str1 = big_vec[j-1], str2 = big_vec[j];
				if (str1 == str2)continue;
				
				map<string, int> ma;
				ma[str1]++; ma[str2]++; 
				bool fir = true;
				
				for (auto it: ma){
					if (fir){
						if (it.first == str2){
							swap(big_vec[j-1], big_vec[j]);
							swap(vec[j-1], vec[j]);
						}
						fir = false;
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