//https://zerojudge.tw/ShowProblem?problemid=a149
#include <iostream>
using namespace std; 

void Do() {
    string s;
    cin >> s;
    int total = 1;
    for (auto i: s) {
        total *= (int(i)-'0');
    }
    cout << total << endl;
}

signed main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        Do();
    }
}
