#include <bits/stdc++.h>
#define ll long long
#define Andy8787_want_AC ios::sync_with_stdio(0),cin.tie(0);cout.tie(0);
using namespace std;
 
int main() {
    Andy8787_want_AC
    bool flag = false;
    int a,b,p;
    cin >> a >> b >> p;
    int temp = 1;
 
    for (int x = 1; x <= p; x++) {
    	temp = (temp*a)%p;
        if (temp == b) {
            flag = true;
            cout << x << "\n";
            break;
        }
    }
    if (!flag) {
        cout << "-1\n";
    }
}