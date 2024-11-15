#include <iostream>
using namespace std;

bool get_flag(int num) {
    if (num % 2 == 0) {
        return false;
    }
    return true;
}

int main() {
    int A[5], B[5];

    for (int i = 0; i < 5; i++) {
        cin >> A[i];
    }
    for (int i = 0; i < 5; i++) {
        cin >> B[i];
    }

    bool flag_first = true; // true:A false:B
    bool flag_now = true;

    while (true) {
        int tmp_arr[5];
        if (flag_first) {
            for (int i = 0; i < 5; i++) {
                tmp_arr[i] = A[i];
            }
        } else {
            for (int i = 0; i < 5; i++) {
                tmp_arr[i] = B[i];
            }
        }

        if ((tmp_arr[0] % 3) == 0) {
            int mx_num = tmp_arr[0];
            for (int i = 0; i < 5; i++) {
                if (mx_num < tmp_arr[i]) {
                    mx_num = tmp_arr[i];
                }
            }

            cout << mx_num << "\n";
            if (mx_num == 0) return 0;
            flag_now = get_flag(mx_num);

            for (int i = 0; i < 5; i++) {
                if (mx_num == tmp_arr[i]) {
                    tmp_arr[i] /= 2;
                }
            }
        } else {
            int mi_num = tmp_arr[0];
            for (int i = 0; i < 5; i++) {
                if (mi_num > tmp_arr[i] && tmp_arr[i] != 0) {
                    mi_num = tmp_arr[i];
                }
            }

            cout << mi_num << "\n";
            if (mi_num == 0) return 0;
            flag_now = get_flag(mi_num);

            for (int i = 0; i < 5; i++) {
                if (mi_num == tmp_arr[i]) {
                    tmp_arr[i] -= 1;
                }
            }
        }

        if (flag_first) {
            for (int i = 0; i < 5; i++) {
                A[i] = tmp_arr[i];
            }
        } else {
            for (int i = 0; i < 5; i++) {
                B[i] = tmp_arr[i];
            }
        }

        flag_first = flag_now;
    }
}
