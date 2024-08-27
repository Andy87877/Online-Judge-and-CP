#include <bits/stdc++.h>
#define ll long long
#define Andy8787_want_AC ios::sync_with_stdio(0),cin.tie(0);cout.tie(0);
using namespace std;

int main() {
    Andy8787_want_AC
    ll n,m;
    cin >> n >> m;

    string arr[n];
    string tmp = "";
    for (ll i = 0; i < m; i++){
        tmp += "0";
    }
    for (ll i = 0; i < n; i++){
        arr[i] = tmp;
    }

    ll now_x = m/2, now_y = n/2;
    ll times = 1;
    ll black = 0;
    ll dir = 0; //方向 0上 1右 2下 3左

    ll front_white = false;
    ll front_black = false;

    bool out = false;    
    while (times <= 1000000){
        if (arr[now_x][now_y] == '0'){ // white
            front_white++;
            front_black = 0;
            
            arr[now_x][now_y] = '1';
            black++;

            if (front_white == 2){
                dir = (dir + 1);
                if (dir == 4) dir = 0;
                front_white = 0;
            }
            

        } else { // black
            front_black++;
            front_white = 0;

            if (front_black == 2){
                dir = dir + 1;
                if (dir == 4) dir = 0;

                arr[now_x][now_y] = '0';
                black--;
                
                front_black = 0;
            } else {
                dir = dir - 1;
                if (dir == -1) dir = 3;
            }
        }
        

        //方向 0上 1右 2下 3左
        if (dir == 0){ 
            now_x--;
        } else if (dir == 1) {
            now_y++;
        } else if (dir == 2) {
            now_x++;
        } else {
            now_y--;
        }

        
        for (ll i = 0; i < m; i++){
            for (ll j = 0; j < n; j++){
                cout << arr[i][j] << " ";
            }
            cout << "\n";
        }
        cout << "\n\n";


        

        if (now_x < 0 || now_x >= m || now_y < 0 || now_y >= n){
            out = true;
            cout << times << " ";
            break;
        } 

        times++;
    }

    if (!out){
        cout << "bad ant ";
    }
    cout << black;
}