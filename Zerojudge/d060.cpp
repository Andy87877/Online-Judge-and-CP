// https://zerojudge.tw/ShowProblem?problemid=d060
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    if (n <= 25) {
        cout << 25 - n;
    } else {
        cout << 85 - n;
    }
}
