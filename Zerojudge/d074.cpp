// https://zerojudge.tw/ShowProblem?problemid=d074
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    vector<int> v;
    int times, num;
    cin >> times;

    for (int i = 0; i < times; i++) {
        cin >> num;
        v.push_back(num);
    }
    sort(v.begin(), v.end());
    cout << v[times-1];
}
