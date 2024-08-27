#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, haha;
	cin >> n;
	n++;
	haha = n-1;
	while (n--){
		string str;
		getline(cin, str);
		if (haha == n) continue;
		// cout << n << ": " << str << "\n";
		
		vector<int> vec;
		int num = 0;
		for (int i = 0; i < str.size(); i++){
			if (str[i] == ' '){
				vec.push_back(num);
				num = 0;
				continue;
			}
			
			num *= 10;
			num += int(str[i])-int('0');
		}
		vec.push_back(num);
		
		sort(vec.begin(), vec.end());
		
		for (int i = 0; i < vec.size()-1; i++){
			cout << vec[i] << " ";
		}
		cout << vec[vec.size()-1] << "\n";
		
	}
}