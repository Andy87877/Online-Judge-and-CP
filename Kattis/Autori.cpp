// https://open.kattis.com/problems/autori
#include <bits/stdc++.h>
using namespace std;

int main() {
    string s, ans = "";
    cin >> s;
    ans += s[0];
    for (long long i = 1; i < s.size()-1; i++) {
        if (s[i] == '-') {
            ans += s[i+1];
        }
    }
    cout << ans << "\n";
}