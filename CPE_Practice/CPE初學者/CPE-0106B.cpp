#include <bits/stdc++.h>
using namespace std;

int main(){
	vector<int> ans;
	string str;
	
	while (getline(cin, str)){
		int num = 0;
		vector<int> tmp;
		
		for (int i = 0; i < str.size(); i++){
			if (str[i] == ' '){
				tmp.push_back(num);
				num = 0;
				continue;
			}
			
			num *= 10;
			num += int(str[i])-int('0');
		}
		tmp.push_back(num);
		
		int n = ans.size(), m = tmp.size();
		if (n < m){// insert
			for (int i = 0; i < m-n; i++){
				ans.insert(ans.begin()+i, tmp[i]);
			}
			for (int i = m-n; i < m; i++){
				ans[i] += tmp[i];
			}
		} else {
			// ans > tmp
			for (int i = n-m; i < n; i++){
				ans[i] += tmp[i-(n-m)];
			}
		}
	}
	
	for (int i = 0; i < ans.size()-1; i++){
		cout << ans[i] << " ";
	}
	cout << ans[ans.size()-1]<< "\n";
}