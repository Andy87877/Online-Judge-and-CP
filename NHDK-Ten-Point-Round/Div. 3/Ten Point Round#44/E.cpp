#include <bits/stdc++.h>
#define int long long
#define Andy8787_want_AC ios::sync_with_stdio(0),cin.tie(0);cout.tie(0);
using namespace std;

signed main() {
    Andy8787_want_AC
    int n, m;
    cin >> n >> m;

    int arr[n][m];
    string name[n];

    for (int i = 0; i < n; i++){
        cin >> name[i];
        for (int j = 0; j < m; j++){
            cin >> arr[i][j];
        }
    }

    for (int j = 0; j < m; j++){
        bool flag = true;
        for (int i = 0; i < n; i++){
            if (arr[i][j] == 1){
                cout << name[i] << " ";
                flag = false;
            }
        }
        if (flag){
            cout << "-1";
        }
        cout << endl;
    }
}
