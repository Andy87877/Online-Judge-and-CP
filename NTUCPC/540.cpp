#include <bits/stdc++.h>
#define ll long long
#define Andy8787_want_AC ios::sync_with_stdio(0),cin.tie(0);cout.tie(0);
using namespace std;

int main() {
    Andy8787_want_AC
    ll n, m, x, y, Q;
    cin >> n >> m >> x >> y >> Q;

    string comand;
    cin >> comand;

    char arr[n][m];
    memset(arr, '.', sizeof(arr));
    arr[x][y] = '@';
    
    for (ll t = 0; t < Q; t++){
        char ch = comand[t];

        arr[x][y] = '.';

        if (ch == 'W'){
            if (x != 0){
                x--;
            }
        } 
        if (ch == 'S'){
            if (x != n-1){
                x++;
            }
        } 
        if (ch == 'A'){
            if (y != 0){
                y--;
            }
        } 
        if (ch == 'D'){
            if (y != m-1){
                y++;
            }
        } 
        arr[x][y] = '@';

        for (int i = 0; i < n; i++){
            for (int j = 0; j < m; j++){
                cout << arr[i][j];
            }
            cout << "\n";
        }
    }
}