// https://zerojudge.tw/ShowProblem?problemid=d596
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    int arr[5][5] = {0};
    cin >> n;
    arr[(n/3-(n%3 == 0))+1][((n-1)%3)+1] = 2;
    for (int i = 0; i < 2; i++) {
        cin >> n;
        arr[(n/3-(n%3 == 0))+1][((n-1)%3)+1] = 1;
    }

    vector<int> ans;
    
    for (int i = 1; i < 4; i++) {
        for (int j = 1; j < 4; j++) {
            if (!arr[i][j]) {
                int temp = 0;
                if (arr[i+1][j]==1||arr[i-1][j]==1||arr[i][j+1]==1||arr[i][j-1]==1) {
                    continue;
                }
                if (arr[i+1][j]==2||arr[i-1][j]==2||arr[i][j+1]==2||arr[i][j-1]==2) {
                    ans.push_back((i-1)*3+j);
                    arr[i][j] = 5;
                    // cout << i << " " << j << "\n";
                }
            }
        }
    }
    
    // for (int i = 0; i < 5; i++) {
    //     for (int j = 0; j < 5; j++) {
    //         cout << arr[i][j] << " ";
    //     }
    //     cout << "\n";
    // }

    if (ans.size()) {
        for (auto i: ans) {
            cout << i << " ";
        }
    } else {
        cout << "Empty";
    }
    cout << "\n";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}