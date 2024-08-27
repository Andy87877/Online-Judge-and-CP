#include <iostream>
#include <string>
#include <vector>
#define ll long long
using namespace std;

int main() {
    ll n,m;
    cin >> n >> m;

    ll arr[n][m];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> arr[i][j];
        }
    }
    // only down
    for (int i = 1; i < n; i++) {
        arr[i][0] += arr[i-1][0];
    }
    for (int i = 1; i < m; i++) {
        arr[0][i] += arr[0][i-1];
    }
    for (int i = 1; i < n; i++) {
        for (int j = 1; j < m; j++) {
            if (arr[i-1][j] > arr[i][j-1]) {
                arr[i][j] += arr[i-1][j];
            } else {
                arr[i][j] += arr[i][j-1];
            }
        }
    }
    cout << arr[n-1][m-1];
}