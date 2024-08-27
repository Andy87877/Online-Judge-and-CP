#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
    int a,b;
    cin >> a >> b;

    int arr[a+2][b+2];
    memset(arr, -1, sizeof(arr));
    int now_i = 0, now_j = 0, tmp = 100000000;
    int ans = 0;
    
    for (int i = 1; i <= a; i++) {
        for (int j = 1; j <= b; j++) {
            cin >> arr[i][j];
            if (tmp > arr[i][j]) {
                now_i = i;
                now_j = j;
                tmp = arr[i][j];
            }
        }
    }
    ans = tmp;
    arr[now_i][now_j] = -1;
    
    while (true) {
        tmp = 100000000;
        int check = 0;
        
        if (arr[now_i][now_j+1] < tmp && arr[now_i][now_j+1] != -1) {
            check = 1;
            tmp = arr[now_i][now_j+1];
        } 
        if (arr[now_i][now_j-1] < tmp && arr[now_i][now_j-1] != -1) {
            check = 2;
            tmp = arr[now_i][now_j-1];
        } 
        if (arr[now_i+1][now_j] < tmp && arr[now_i+1][now_j] != -1) {
            check = 3;
            tmp = arr[now_i+1][now_j];
        } 
        if (arr[now_i-1][now_j] < tmp && arr[now_i-1][now_j] != -1) {
            check = 4;
            tmp = arr[now_i-1][now_j];
        }

        // cout << tmp << " ";
        if (check == 0) {
            break;
        } else if (check == 1) {
            now_j++;
        } else if (check == 2) {
            now_j--;
        } else if (check == 3) {
            now_i++;
        } else if (check == 4) {
            now_i--;
        } 
        ans += arr[now_i][now_j];
        arr[now_i][now_j] = -1;
        // for (int i = 1; i <= a; i++) {
        //     for (int j = 1; j <= b; j++) {
        //         cout << arr[i][j] << " ";
        //     }
        //     cout << "\n";
        // }
        // cout << "\n\n";
    }
    cout << ans << "\n";

    
}
