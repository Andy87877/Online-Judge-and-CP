// https://zerojudge.tw/ShowProblem?problemid=a022
#include <iostream>
using namespace std;

bool judge(string num) {
    int times = num.length();
    for (int i = 0; i < (times/2); i++) {
        if (num[i] != num[times-i-1]) {
            return false;
        }
    }
    return true;
}

int main() {
    string num;
    cin >> num;
    if(judge(num)) {
        cout << "yes";
    } else {
        cout << "no";
    }
}
