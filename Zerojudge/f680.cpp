#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n+2][n+2];
    bool check[n+2][n+2];
    memset(check, 0, sizeof(check));
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= n; j++) {
            cin >> arr[i][j];
        }
    }

    int x,y, ans = 0;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if ((check[i][j] == 0) && (arr[i][j] != 0)) {
                queue<pair<int, int>> que; // (x,y)
                pair<int, int> pa;
                pa.first = i; pa.second = j;
                que.push(pa);
                while (!que.empty()) {
                    x = que.front().first;
                    y = que.front().second;
                    //cout << x << " " << y << "\n";
                    if((arr[x-1][y] == arr[i][j]) && (check[x-1][y] == 0)){
                        pa.first = x-1; pa.second = y;
                        check[x-1][y] = 1;
                        que.push(pa);
                    }
                    if((arr[x+1][y] == arr[i][j]) && (check[x+1][y] == 0)){
                        pa.first = x+1; pa.second = y;
                        check[x+1][y] = 1;
                        que.push(pa);
                    }
                    if((arr[x][y-1] == arr[i][j]) && (check[x][y-1] == 0)){
                        pa.first = x; pa.second = y-1;
                        check[x][y-1] = 1;
                        que.push(pa);
                    }
                    if((arr[x][y+1] == arr[i][j]) && (check[x][y+1] == 0)){
                        pa.first = x; pa.second = y+1;
                        check[x][y+1] = 1;
                        que.push(pa);
                    }
                    que.pop();
                }
                ans++;
            }
        }
    }
    cout << ans << "\n";
}