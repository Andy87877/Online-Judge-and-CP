// https://zerojudge.tw/ShowProblem?problemid=c013
#include <iostream>
using namespace std;

void Wave(int A) {
    for (int k = 0; k < A; k++) {
        for (int l = 0; l <= k; l++) {
            cout << k+1;
        }
        cout << endl;
    }

    for (int k = A-2; k >= 0; k--) {
        for (int l = 0; l <= k; l++) {
            cout << k+1;
        }
        cout << endl;
    }
}

void Wavetimes() {
    int A,F;
    cin >> A >> F;
    for (int j = 0; j < F; j++) {
        Wave(A);
        cout << endl;
    }
}

int main() {
    int times;
    cin >> times;
    for (int i = 0; i < times; i++) {
        Wavetimes();
    }
}
