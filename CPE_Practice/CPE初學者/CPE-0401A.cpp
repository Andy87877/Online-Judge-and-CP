#include <bits/stdc++.h>
using namespace std;

int main(){
	string str;
	while(getline(cin, str)){
		vector<string> vec, ans;
		istringstream is(str);
		string s;
		
		while (is >> s){
			vec.push_back(s);
		}
		
		for (int i = 0; i < vec.size(); i++){
			bool flag = true;
			
			for (int j = 0; j < ans.size(); j++){
				if(vec[i][0] <= ans[j][0]){
					ans.insert(ans.begin()+j, vec[i]);
					flag = false;
					break;
				}
			}
			
			
			if (flag){
				ans.push_back(vec[i]);
			}
		}
		
		
		
		for (int i = 0; i < ans.size()-1; i++){
			cout << ans[i] << " ";
		}
		cout << ans[ans.size()-1] << "\n";
	}
}
