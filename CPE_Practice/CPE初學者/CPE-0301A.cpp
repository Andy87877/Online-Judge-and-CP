#include <bits/stdc++.h>
using namespace std;

int main(){
 	string str;
 	while (getline(cin, str)){
 		int now = 0;
 		vector<int> vec;
 		for (int i = 0; i < str.size(); i++){
 			if (str[i] == ' '){
 				vec.push_back(now);
 				now = 0;
 				continue;
 			}
 			now *= 10;
 			now += int(str[i])-int('0');
 		}
 		vec.push_back(now);
 		
 		sort(vec.begin(), vec.end());
 		
 		for (int i = 0; i < vec.size()-1; i++){
 			cout << vec[i] << " ";
 		}
 		cout << vec[vec.size()-1] << "\n";
 	}
}