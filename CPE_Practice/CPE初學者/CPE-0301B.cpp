#include <bits/stdc++.h>
using namespace std;

int main(){
	string str;
	while (getline(cin, str)){
		istringstream is(str);
		vector<int> vec;
		string num;
		
		while (is >> num){
			vec.push_back(stoi(num));
		}
		
		sort(vec.begin(), vec.end());
		for (int i = 0; i < vec.size()-1; i++){
			cout << vec[i] << " ";
		}
		cout << vec[vec.size()-1] << "\n";
	}
}