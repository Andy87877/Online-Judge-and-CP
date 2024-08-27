// https://zerojudge.tw/ShowProblem?problemid=d039
#include <iostream>
using namespace std;

int main() {
    int n, m, ans, times;
    cin >> times;
    for (int i = 0; i < times; i++) {
        cin >> n >> m;
        ans = (n/3)*(m/3);
        cout << ans << endl;
    }
}
