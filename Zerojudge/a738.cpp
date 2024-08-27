// https://zerojudge.tw/ShowProblem?problemid=a738
#include <iostream>
using namespace std;

void judge(int a, int b) {
    if ((a % b) != 0) {
        judge(b,a%b);
    } else {
        cout << b << endl;
    }
}

int main() {
    int a,b;
    while (cin >> a >> b) {
        judge(a,b);
    }
}
