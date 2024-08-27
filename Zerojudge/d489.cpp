// https://zerojudge.tw/ShowProblem?problemid=d489
#include <iostream>
using namespace std;

int main() {
    int a, b, c, s;
    cin >> a >> b >> c;
    // 海龍公式
    s = (a+b+c)/2;
    cout << s*(s-a)*(s-b)*(s-c) << endl;
}
