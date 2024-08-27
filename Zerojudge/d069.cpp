// https://zerojudge.tw/ShowProblem?problemid=d069
#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        int y;
        cin >> y;
        if ((y % 400) == 0) {
            cout << "a leap year";
        } else {
            if (((y % 100) != 0) && ((y % 4) == 0)){
                cout << "a leap year";
            } else {
                cout << "a normal year";
            }
        }
        cout << "\n";
    }
}
