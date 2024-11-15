#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    int P[N];
    for (int i = 0; i < N; i++) {
        cin >> P[i];
    }

    int ans = 0;
    while (true) {
        int X, G;
        cin >> X >> G;

        if (X == 0 && G == 0) {
            break;
        }

        ans += P[X - 1] * G;
    }
    cout << ans << "\n";
}