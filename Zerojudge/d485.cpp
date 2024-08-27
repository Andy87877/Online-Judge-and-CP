// https://zerojudge.tw/ShowProblem?problemid=d485
#include <iostream>
#define int long long
using namespace std;

signed main() {
    int a, b;
    cin >> a >> b;
    cout << (((b-a)/2) + (((a%2) == 0) || ((b%2) == 0)));
}
