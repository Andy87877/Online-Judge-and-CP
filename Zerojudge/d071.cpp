// https://zerojudge.tw/ShowProblem?problemid=d071
#include <iostream>
using namespace std;

bool judge(int y) {
    if ((y % 400) == 0) {
        return true;
    } else if (((y % 100) != 0) && ((y % 4) == 0)) {
        return true;
    } else {
        return false;
    }
}

int main() {
    int y;
    while(cin >> y) {
        if (judge(y)) {
            cout << "a leap year" << endl;
        } else {
            cout << "a normal year" << endl;
        }
    }
}
