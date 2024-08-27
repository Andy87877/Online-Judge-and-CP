// https://zerojudge.tw/ShowProblem?problemid=j605
#include <bits/stdc++.h>
using namespace std;

int main() {
    int k;
    cin >> k;
    int t[k], s[k];

    for (int i = 0; i < k; i++) {
        cin >> t[i] >> s[i];
    }

    int arr[k], mx = -999999, error = 0, tm = -999999;
    for (int i = 0; i < k; i++) {
        if (s[i] == -1) error++;
    }
    
    for (int i = 0; i < k; i++) {
        mx = max(mx, s[i]);
        arr[i] = mx-k-error*2;
        tm = max(arr[i], tm);
    }

    int ans1 = arr[k-1], ans2;
    if (ans1 < 0) ans1 = 0;

    for (int i = 0; i < k; i++) {
        if (tm == arr[i]) {
            ans2 = t[i];
            break;
        }
    }

    cout << ans1 << " " << ans2;
}
