// https://zerojudge.tw/ShowProblem?problemid=i399
#include <bits/stdc++.h>
using namespace std;

int main() {
    int a[3];
    for (int i = 0; i < 3; i++) {
        cin >> a[i];
    }

    for (int i = 0; i < 3; i++) {
        for (int j = i+1; j < 3; j++) {
            if (a[i] < a[j]) {
                swap(a[i], a[j]);
            }
        }
    }

    if ((a[0] == a[1]) && (a[2] == a[1])) {
        cout << "3 " << a[0];
    } else if ((a[0] == a[1]) || (a[1] == a[2])) {
        cout << "2 " << a[0] << " " << a[2];
    } else {
        cout << "1 " << a[0] << " " << a[1] << " " << a[2]; 
    }
}
