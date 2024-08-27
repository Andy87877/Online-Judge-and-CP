#include <bits/stdc++.h>
using namespace std;
string s, ans = "";

int main() {
    int n;
    cin >> n;
    cin >> s;
    for (auto i: s) {
        if ((int(i) >= int('A')) && (int(i) <= int('Z'))) {
            ans += int(i)+int('a')-int('A');
        } else {
            ans += int(i)-int('a')+int('A');
        }
    }
    cout << ans << "\n";
}