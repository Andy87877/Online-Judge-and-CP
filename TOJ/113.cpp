#include <bits/stdc++.h>
using namespace std;
int n;
string str, type, ans = "";

int main() {
    cin >> n;
    cin >> str;
    cin >> type;

    if (type == "L") {
        for (int i = 0; i < n-1; i++){
            if (str[i+1] == 'P') {
                ans += 'P';
            } else {
                ans += '.';
            }
        }
        ans += '.';
    } else {
    	ans += '.';
        for (int i = 1; i < n; i++){
            if (str[i-1] == 'P') {
                ans += 'P';
            } else {
                ans += '.';
            }
        }
    }
    cout << ans << "\n";
}