// https://zerojudge.tw/ShowProblem?problemid=d065
#include <iostream>
#define int long long
using namespace std; 

signed main() {
    int num,max;
    cin >> max;
    for (int i = 0; i < 2; i++) {
        cin >> num;
        if (num > max) {
            max = num;
        }
    }
    cout << max;
}
