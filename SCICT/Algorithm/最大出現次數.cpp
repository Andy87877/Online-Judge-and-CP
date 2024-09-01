// https://hackmd.io/p9Y-PTzWRZyqknDq3oPeGQ#%E6%9C%80%E5%A4%A7%E5%87%BA%E7%8F%BE%E6%AC%A1%E6%95%B8
#include <bits/stdc++.h>
using namespace std;
int ans[1001];

int main() {
    memset(ans, 0, sizeof(ans));
    int times, max = 0;
    cin >> times;
    for (int i = 0; i < times; i++) {
        int num;
        cin >> num;
        ans[num]++;
        if (ans[num] > max) max++;
    }
    for (int i = 1000; i >= 1; i--) {
        if (ans[i] == max) {
            cout << i << " appears the most.\n";
            break;
        }
    }
}