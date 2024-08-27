#include <bits/stdc++.h>
using namespace std;

int main(){
	string str;
	while (getline(cin, str)){
		vector<int> vec;
		istringstream is(str);
		int num;
		
		while (is >> num){
			vec.push_back(num);
		}
		
		for (int i = 0; i < vec.size(); i++){
			for (int j = i+1; j < vec.size(); j++){
				if (vec[i]%2 == 0){
					if (vec[j]%2 == 0){
						if (vec[i] < vec[j]) swap(vec[i],vec[j]);
					} else {
						swap(vec[i],vec[j]);
					}
				} else {
					if (vec[j]%2 == 1){
						if (vec[i] > vec[j]) swap(vec[i],vec[j]);
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