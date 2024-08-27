// https://zerojudge.tw/ShowProblem?problemid=h027
#include <bits/stdc++.h>
using namespace std;

int main() {
    int s,t,n,m,r;
    cin >> s >> t >> n >> m >> r;
    int A[s][t], B[n][m];

    for (int i = 0; i < s; i++) {
        for (int j = 0; j < t; j++) {
            cin >> A[i][j];
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> B[i][j];
        }
    }

    int ans_times = 0, ans_min = INT_MAX;

    // 用B的大小 從 0~n-s 0~m-t
    // 左上當參考點
    for (int i = 0; i < n-s+1; i++) {
        for (int j = 0; j < m-t+1; j++) {
            int diff = 0, tmp_ans = 0;
            bool check = true; // 符合
            
            // A
            for (int k = 0; k < s; k++) {
                for (int l = 0; l < t; l++) {
                    // cout << k << " " << l << "     " << i+k << " " << j+l << "\n";
                    // cout << A[k][l] << "     " << B[i+k][j+l] << "\n\n";
                    if (A[k][l] != B[i+k][j+l]) {
                        diff++;
                        tmp_ans += (A[k][l]-B[i+k][j+l]);
                        
                        
                        if (diff > r) {
                            check = false;
                            break;
                        }
                    }
                } 
                if (!check) break;
            }
            
            if (check) {
                ans_times++;
                
                ans_min = min(abs(tmp_ans), ans_min);
                // cout << tmp_ans << "\n";
            }
        }
    }

    if (ans_times == 0) {
        cout << "0\n-1\n";
    } else {
        cout << ans_times << "\n" << ans_min << "\n";
    }
}
