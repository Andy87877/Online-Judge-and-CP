// https://zerojudge.tw/ShowProblem?problemid=h084
#include <bits/stdc++.h>
using namespace std;


int main() {
    int n,k;
    cin >> n >> k;

    int h[n], w[k]; //高 寬
    
    int hi = -1; // 最高
    for (int i = 0; i < n; i++) {
        cin >> h[i];
        hi = max(h[i], hi);
    }

    for (int i = 0; i < k; i++) {
        cin >> w[i];
    }

    int ans = hi; // 答案
    int a = hi, b = 1; 
    int high;

    while (a >= b) { //高度
        //cout << a << " " << b << "\n";
        high = (a+b)/2;
        int tmp = 0, check_index = 0;
        bool solving = false, ok = false;
        for (int j = 0; j < n; j++) {//左到右
            if (h[j] >= high) {
                tmp++;
                solving = true;
            } else if (solving) {
                tmp = 0;
                //check_index = 0;
            }
            if (tmp == w[check_index]) {
                check_index++;
                solving = false;
                tmp = 0;
            }

            if (check_index == k) {
                ans = high;
                ok = true;
                break;
            }
        }
        if (ok) {
            b = high+1;
        } else {
            a = high-1;
        }
    }

    cout << ans << "\n";
}
