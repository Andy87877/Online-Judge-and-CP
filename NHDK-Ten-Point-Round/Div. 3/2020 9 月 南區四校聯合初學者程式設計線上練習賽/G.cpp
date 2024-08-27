#include <iostream>
#define int long long
using namespace std;

signed main() {
    int N, M, temp;
    cin >> N >> M;
    int A[N];

    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    for (int i = 0; i < N; i++) {
        for (int j = i; j < N; j++) {
            if (A[i] < A[j]) {
                temp = A[i];
                A[i] = A[j];
                A[j] = temp;
            }
        }
    }

    if ((N % 2) != 0) {
        
    }
}