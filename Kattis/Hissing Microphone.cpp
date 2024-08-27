// https://open.kattis.com/problems/hissingmicrophone
#include <bits/stdc++.h>
using namespace std;

string solve() {
    string s;
    cin >> s;
    for (int i = 0; i < s.size()-1; i++) {
        if ((s[i] == 's') && (s[i+1] == 's')) {
            return "hiss";
        }
    }
    return "no hiss";
}

int main() {
    cout << solve() << endl;
}