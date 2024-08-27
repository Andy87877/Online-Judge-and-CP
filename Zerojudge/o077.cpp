// https://zerojudge.tw/ShowProblem?problemid=o077
#include <bits/stdc++.h>
#define ll long long
#define Andy8787_want_AC ios::sync_with_stdio(0),cin.tie(0);cout.tie(0);
using namespace std;

int H,W,N;
int arr[20][20];
int r,c,t,x;

void judge();
void show();

int main() {
    Andy8787_want_AC
    cin >> H >> W >> N;

    // judge
    memset(arr, 0, sizeof(arr));
    for (int ttttt = 0; ttttt < N; ttttt++){
        judge();
        // show();
    }
    show();
}

void judge(){
    cin >> r >> c >> t >> x;
    for (int i = r-t; i <= r+t; i++){
        for (int j = c-t; j <= c+t; j++){
            int dis = abs(r-i)+abs(c-j);
            if (dis <= t){
                if (i >= 0 && i < H && j >= 0 && j < W){
                    arr[i][j] += x;
                }
            }
        }
    }
}

void show(){
    for (int i = 0; i < H; i++){
        for (int j = 0; j < W; j++){
            cout << arr[i][j] << " ";
        }
        cout << "\n";
    }
    // cout << "\n";
}