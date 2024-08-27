// https://hackmd.io/p9Y-PTzWRZyqknDq3oPeGQ#%E6%9C%80%E5%A4%A7%E5%87%BA%E7%8F%BE%E6%AC%A1%E6%95%B81
#include <bits/stdc++.h>
using namespace std;
int arr[1001];

int main() {
    int times, max = 0;
    cin >> times;
    for (int i = 0; i < times; i++) {
        int num;
        cin >> num;
        arr[num]++;
        if (arr[num] > max) max++;
    }

    int ans[times], now = 0;
    for (int i = 0; i < 1000; i++) {
        if (arr[i] == max) {
            ans[now] = i;
            now++;
        }
    }
    
    cout << "ans: [" << ans[0];
    for (int i = 1; i < now; i++) {
        cout << ", " << ans[i];
    }
    cout << "]\n";
}