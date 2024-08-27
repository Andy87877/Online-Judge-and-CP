#include <bits/stdc++.h>
using namespace std;

int main(){
	string str;
	bool SUM = true;
	int sum = 0, times = 0;
	
	while (cin >> str){
		if (str == "sum" || str == "avg"){
			if (sum == 0 && times == 0) continue;
			if (SUM){
				cout << sum << "\n";
			} else {
				double ans = sum*1.00/times*1.00;
				printf("%.2f\n",ans);
			}
			
			sum = 0;
			times = 0;
			if (str == "sum"){
				SUM = true;
			} else {
				SUM = false;
			}
			continue;
		}
		
		sum += stoi(str);
		times++;
	}
	
	if (SUM){
		cout << sum << "\n";
	} else {
		double ans = sum*1.00/times*1.00;
		printf("%.2f\n",ans);
	}
}