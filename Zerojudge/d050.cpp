// https://zerojudge.tw/ShowProblem?problemid=d050
#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    if (t < 15) {
        t += 24;
    }
    cout << (t - 15);
}
