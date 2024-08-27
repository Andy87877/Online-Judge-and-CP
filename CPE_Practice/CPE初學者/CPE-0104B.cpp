#include <bits/stdc++.h>
using namespace std;

int main(){
	int x1,y1,x2,y2;
	while (cin >> x1 >> y1 >> x2 >> y2){
		if (x1 == 0 &&y1 == 0 &&x2 == 0 &&y2 == 0){
			return 0;
		}
		
		int x = x1+x2, y = y1+y2;
		cout << "(" << x << "," << y << ")\n";
	}
}