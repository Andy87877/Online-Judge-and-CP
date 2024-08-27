// https://www.hackerrank.com/challenges/30-review-loop/problem?isFullScreen=true
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int t;
string s;

void solve() {
    cin >> s;
    for (int i = 0; i < s.size(); i+=2) {
        cout << s[i];
    }
    cout << " ";
    for (int i = 1; i < s.size(); i+=2) {
        cout << s[i];
    }
    cout << "\n";
}

int main() {
    cin >> t;
    while(t--) {
        solve();
    }
}
