#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
    int m,n,k;
    cin >> m >> n >> k;
    char arr[m][n];

    for (int i = 0; i < m; i++) { // 直
        for (int j = 0; j < n; j++) { // 恆
            cin >> arr[i][j];
        }
    }

    string ans = "";
    int a = m-1,b = 0;
    int tmp;

    for (int i = 0; i < k; i++) {
        cin >> tmp;
        if (tmp == 0) {
            if (a != 0) {
                a--;
            }
        } else if (tmp == 1) {
            if (b != n-1) {
                b++;
            }
        } else if (tmp == 2) {
            if (b != n-1 && a != m-1) {
                b++;
                a++;
            }
        } else if (tmp == 3) {
            if (a != m-1) {
                a++;
            }
        } else if (tmp == 4) {
            if (b != 0) {
                b--;
            }
        } else if (tmp == 5) {
            if (a != 0 && b != 0) {
                a--;
                b--;
            }
        }
        ans += arr[a][b];
    }
    cout << ans << "\n";

    vector<char> v;
    for (int i = 0; i < ans.size(); i++) {
        bool flag = true;
        for (int j = 0; j < v.size(); j++) {
            if (ans[i] == v[j]) {
                flag = false;
                break;
            }
        }
        if (flag) v.push_back(ans[i]);
    }

    cout << v.size();
}