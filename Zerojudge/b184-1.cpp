// 遞迴版
/*
    &data[1] 下一個資料:(
*/
#include <bits/stdc++.h>
using namespace std;

struct cargo{
    int v;
    int w;
};

int mx(int amount, cargo* data, int val, int wei, int lim) {
    if (amount == 0) {
        return val;
    }

    if (wei + data[0].w > lim) {
        return mx(amount-1, &data[1], val, wei, lim);
    }

    int a = mx(amount-1, &data[1], val, wei, lim);
    int b = mx(amount-1, &data[1], val+data[0].v, wei+data[0].w, lim);
    if (a > b) return a;
    return b;
}

int main() {
    int amount;
    while(cin >> amount) {
        cargo data[amount];
        for (int t = 0; t < amount; t++){
            cin >> data[t].w >> data[t].v;
        }
        cout << mx(amount, data, 0, 0, 100) << "\n";
    }
}