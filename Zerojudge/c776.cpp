// https://zerojudge.tw/ShowProblem?problemid=c776
#include <iostream>
using namespace std;

int main() {
    int n, m, total = 0;
    cin >> n >> m;
    total = 6+(m-1)*4; // 第一層
    total = total*n-m*(n-1); // 後面

    cout << total << endl;
}
