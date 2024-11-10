#include <bits/stdc++.h>
using namespace std;

int judge(int num) {
    int ans = 0;
    for (int i = 1; i <= sqrt(num); i++) {
        if (num % i == 0) {
            ans += 2;
        }
    }
    if (int(sqrt(num)) * int(sqrt(num)) == num) {
        ans -= 1;
    }

    return ans;
}

int main() {
    int x, y;
    cin >> x >> y;

    int N = 0, M = -1;
    for (int now_num = x; now_num <= y; now_num++) {
        int tmp_ans = judge(now_num);

        if (tmp_ans > M) {
            M = tmp_ans;
            N = now_num;
        }
    }

    cout << N << " " << M << "\n";
}