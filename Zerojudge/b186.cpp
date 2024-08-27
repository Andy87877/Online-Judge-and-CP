// https://zerojudge.tw/ShowProblem?problemid=b186
#include <iostream>
using namespace std;
int main() {
    long long c, ch, ca;
    while (cin >> c >> ch >> ca) {
        if (c > ca*5) {
            ch += ca/2;
        } else {
            ch += c/10;
        }
        cout << c << " 個餅乾，" << ch << " 盒巧克力，" << ca << " 個蛋糕。" << endl;
    }
}
