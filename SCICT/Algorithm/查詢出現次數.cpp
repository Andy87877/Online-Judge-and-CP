// https://hackmd.io/p9Y-PTzWRZyqknDq3oPeGQ#%E6%9F%A5%E8%A9%A2%E5%87%BA%E7%8F%BE%E6%AC%A1%E6%95%B8
#include <bits/stdc++.h>
using namespace std;

int ans[1001];
int main() {
    int n;
    cin >> n;
    memset(ans, 0, sizeof(ans));
    for (int i = 0; i < n; i++) {
        int temp;
        cin >> temp;
        ans[temp]++;
    }
    int check;
    cin >> check;
    cout << check << " appears " << ans[check] << " times.\n";
}