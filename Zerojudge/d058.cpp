// https://zerojudge.tw/ShowProblem?problemid=d058
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    if (n == 0) {
        cout << 0;
    } else if (n > 0) {
        cout << 1;
    } else {
        cout << -1;
    }
}
