// https://zerojudge.tw/ShowProblem?problemid=b758
#include <iostream>
using namespace std;

int main() {
    int H,M;
    cin >> H >> M;
    H += 2;
    M += 30;
    if (M >= 60) {
        M %= 60;
        H += 1;
    }
    if (H >= 24) {
        H %= 24;
    }
    if (H < 10) {
        cout << "0";
    } 
    cout << H << ":";
    if (M < 10) {
        cout << "0";
    }
    cout << M << endl;
}
