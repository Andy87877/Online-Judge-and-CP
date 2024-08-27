// https://zerojudge.tw/ShowProblem?problemid=b681
#include <iostream>
#define int long long
using namespace std;

signed main() {
    int n;
    cin >> n;
    if (n > 0) {
        cout << 2*n-1; //(n-1)*2+1
    } else {
        cout << n*-2 ; //(n)*-2
    }
}
