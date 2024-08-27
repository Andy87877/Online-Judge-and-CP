#include <bits/stdc++.h>
using namespace std;

int main() {
    int eeeeeeeeeeeeeee = 1;
    int s;

    while(cin >> s){
        cout << "Case " << eeeeeeeeeeeeeee << ":\n";
        eeeeeeeeeeeeeee++;
        int n, m;
        cin >> n >> m;

        int arr[n+2][m+2], ans[n+2][m+2];
        for (int i = 0; i < n+2; i++) {
            for (int j = 0; j < m+2; j++) {
                ans[i][j] = 0;
            }
        }

        int x, y, time;
        vector<int> vec; // y x time
        queue<vector<int>> que;
        for (int i = 1; i < n+1; i++) {
            for (int j = 1; j < m+1; j++) {
                cin >> arr[i][j];
                if (arr[i][j] == 1 && i == 1) {
                    vec.clear();
                    vec.push_back(i);
                    vec.push_back(j);
                    vec.push_back(1);
                    ans[i][j] = 1;
                    que.push(vec);
                }
            }
        }

        while(!que.empty()) {
            vec = que.front();
            que.pop();
            y = vec[0];
            x = vec[1];
            time = vec[2];
        // cout << x << " " << y << " " << time << "\n";
            ans[y][x] = time;
            if (s == 1) {
                if (ans[y-1][x] == 0 && arr[y-1][x] == 1) {
                    vec.clear();
                    vec.push_back(y-1);
                    vec.push_back(x);
                    vec.push_back(time+1);
                    que.push(vec);
                }
            }
            if (ans[y+1][x] == 0 && arr[y+1][x] == 1) {
                vec.clear();
                vec.push_back(y+1);
                vec.push_back(x);
                vec.push_back(time+1);
                que.push(vec);
            }
            if (ans[y][x+1] == 0 && arr[y][x+1] == 1) {
                vec.clear();
                vec.push_back(y);
                vec.push_back(x+1);
                vec.push_back(time+1);
                que.push(vec);
            }
            if (ans[y][x-1] == 0 && arr[y][x-1] == 1) {
                vec.clear();
                vec.push_back(y);
                vec.push_back(x-1);
                vec.push_back(time+1);
                que.push(vec);
            }
        }

        for (int i = 1; i < n+1; i++) {
            for (int j = 1; j < m+1; j++) {
                cout << ans[i][j] << " ";
            }
            cout << "\n";
        }
    }
}