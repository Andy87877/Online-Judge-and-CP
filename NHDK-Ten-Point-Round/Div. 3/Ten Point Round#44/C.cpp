#include <bits/stdc++.h>
#define ll long long
#define Andy8787_want_AC ios::sync_with_stdio(0),cin.tie(0);cout.tie(0);
using namespace std;

int main() {
    Andy8787_want_AC

    int n;
    cin >> n;

    int arr_mx[n]; // 水桶的容量上限
    int arr_now[n];

    for (int i = 0; i < n; i++){
        cin >> arr_mx[i];
        arr_now[i] = 0;
    }

    int times, answer = 0;
    cin >> times;

    for (int i = 0; i < times; i++){
        int x, w; //代表在第 x個水桶加入 w公升的水

        cin >> x >> w;

        x -= 1;
        bool flag = true;
        int now_water = w;

        for (int j = x; j < n; j++){
            if (now_water + arr_now[j] <= arr_mx[j]){
                arr_now[j] += now_water;
                flag = false;
                break;
            }
            
            now_water -= (arr_mx[j] - arr_now[j]);
            arr_now[j] = arr_mx[j];
        }

        if (flag){
            answer += now_water;
        }
    }
    
    for (int i = 0; i < n; i++){
        cout << arr_now[i] << " ";
    }
    cout << "\n";
    cout << answer;
}