// https://zerojudge.tw/ShowProblem?problemid=a024
#include <iostream>
#define int long long
using namespace std;

void judge(int a, int b) {
    if ((a % b) == 0) {
        cout << b;
    } else {
        judge(b,a%b);
    }
}

signed main() {
    int a, b;
    cin >> a >> b;
    judge(a,b);
}
