// https://zerojudge.tw/ShowProblem?problemid=d098
#include <iostream>
#include <string>
using namespace std;

void judge(string str) {
    int num = 0, total = 0;
    bool flag = true;

    for (int i = 0; i < str.length(); i++) {
        if (str[i] == ' ') {
            if (flag) {
                total += num;
            }
            flag = true;
            num = 0;
        } else {
            if ((int('0') > int(str[i])) || (int(str[i]) > int('9'))) {
                flag = false;
            } else if (flag) {
                num = (num*10)+(int(str[i])-'0');
            }
        }
    }
    if (flag) {
        total += num;
    }
    cout << total << endl;
}
signed main() {
    string str;
    while (getline(cin, str)) {
        judge(str);
    }
}
