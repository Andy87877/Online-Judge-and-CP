#include <bits/stdc++.h>
using namespace std;

int arr[31][51];
int r,c,n, x, y;
char typ;
int up;
int cant_push = 0, space = 0;

void solve(char typ, int up) {
    if (typ == 'B') {
        for (int i = x-1; i >= 0; i--) {
            if (arr[up][i]) {
                if (i >= x-3) {
                    cant_push++;
                    return;
                } else {
                    arr[up][i+1] = 2;
                    arr[up][i+2] = 2;
                    arr[up][i+3] = 2;
                    return;
                }
            }
        }
        arr[up][0] = 2;
        arr[up][1] = 2;
        arr[up][2] = 2;
        return;
    }
    if (typ == 'A') {
        if (up >= y-3) {
            cant_push++;
            return;
        }
        for (int i = up; i <= up+3; i++) {
            for (int j = x-1; j >= 0; j--) {
                if (arr[i][j]) {
                    if (j == x-1) {
                        cant_push++;
                        return;
                    } else {
                        arr[up][j+1] = 1;
                        arr[up+1][j+1] = 1;
                        arr[up+2][j+1] = 1;
                        arr[up+3][j+1] = 1;
                        return;
                    }
                }
            }
        }
        arr[up][0] = 1;
        arr[up+1][0] = 1;
        arr[up+2][0] = 1;
        arr[up+3][0] = 1;
        return;
    }
    if (typ == 'C') {
        if (up >= y-1) {
            cant_push++;
            return;
        }
        for (int i = up; i <= up+3; i++) {
            for (int j = x-1; j >= 0; j--) {
                if (arr[i][j]) {
                    if (j >= x-2) {
                        cant_push++;
                        return;
                    } else {
                        arr[up][j+1] = 3;
                        arr[up][j+2] = 3;
                        arr[up+1][j+1] = 3;
                        arr[up+1][j+2] = 3;
                        return;
                    }
                }
            }
        }
        arr[up][0] = 3;
        arr[up][1] = 3;
        arr[up+1][0] = 3;
        arr[up+1][1] = 3;
        return;
    }
    if (typ == 'D') {
        if (up >= y-2) {
            cant_push++;
            return;
        }
        for (int i = up; i <= up+1; i++) {
            for (int j = x-1; j >= 0; j--) {
                if (arr[i][j]) {
                    if (j >= x-2) {
                        cant_push++;
                        return;
                    } else {
                        arr[up][j+1] = 4;
                        arr[up+1][j+2] = 4;
                        arr[up+1][j+1] = 4;
                        arr[up+1][j+2] = 4;
                        return;
                    }
                }
            }
        }
        arr[up][0] = 4;
        arr[up+1][0] = 4;
        arr[up+1][1] = 4;
        arr[up+1][2] = 4;
        return;
    }
}

int main() {
    cin >> x >> y >> n;

    for (int i = 0; i < y; i++) {
        for (int j = 0; j < x; j++) {
            arr[i][j] = 0;
        }
    }

    for (int i = 0; i < n; i++) {
        cin >> typ >> up;
        solve(typ, up);
    }

    for (int i = 0; i < y; i++) {
        for (int j = 0; j < x; j++) {
            cout << arr[i][j] << " ";
            if (arr[i][j] == 0) {
                space++;
            } 
        }
        cout << "\n";
    }

    cout << space << " " << cant_push << "\n";
}