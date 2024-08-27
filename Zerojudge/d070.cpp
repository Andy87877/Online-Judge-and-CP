// https://zerojudge.tw/ShowProblem?problemid=d070
#include <iostream>
using namespace std;

int main() {
    int y;
    while(true) {
        cin >> y;
        if (y == 0) {
            break;
        }
        if ((y % 400) == 0) {
            cout << "a leap year";
        } else {
            if (((y % 4) == 0) && ((y % 100) != 0)) {
                cout << "a leap year";
            } else {
                cout << "a normal year";
            }
        }
        cout << endl;
    }
}
