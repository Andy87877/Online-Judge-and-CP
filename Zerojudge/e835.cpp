// https://zerojudge.tw/ShowProblem?problemid=e835
#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	int a,b,c;
	if (n <= 2500) {
		a = 1;
		b = (n/25)+1-(n%25 == 0);
		c = (n%25)+(n%25 == 0)*25;
	} else if (n >= 7501) {
		n -= 7500;
		a = 3;
		b = (n/25)+1-(n%25 == 0);
		c = (n%25)+(n%25 == 0)*25;
	} else {
		n -= 2500;
		a = 2;
		b = (n/50)+1-(n%50 == 0);
		c = (n%50)+(n%50 == 0)*50;
	}
	cout << a << " " << b << " " << c << "\n";
}