#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    string ans[7] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};

    cin >> s;
    bool flag = true;
    for (int i = 0; i < 7; i++) {
        if (s == ans[i]) {
            cout << i;
            flag = false;
            break;
        } 
    }
    if (flag) {
        cout << "error";
    }
}