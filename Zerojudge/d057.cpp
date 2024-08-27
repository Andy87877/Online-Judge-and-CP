// https://zerojudge.tw/ShowProblem?problemid=d057
#include <iostream>
#include <cmath>
using namespace std;

void judge(int x1, int y1, int x2, int y2) {
    if ((x1 == x2) && (y1 == y2)) {
        cout << 0;
    } else if ((x1 == x2) || (y1 == y2)) {
        cout << 1;
    } else if (abs(x1-x2) == abs(y1-y2)) {
        cout << 1;
    } else {
        cout << 2;
    }
    cout << endl;
}

int main() {
    int x1, y1, x2, y2;
    while(cin >> x1 >> y1 >> x2 >> y2) {
        if (x1 == 0) {
            break;
        }
        judge(x1, y1, x2, y2);
    }
}
