// https://zerojudge.tw/ShowProblem?problemid=a227
#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll n, move = 0;

void hanoi(ll n, char A, char B, char C) {
    if (n == 1) {
        cout << "Move ring " << n << " from " << A << " to " << C << "\n";
    } else {
        hanoi(n-1, A, C, B);
        cout << "Move ring " << n << " from " << A << " to " << C << "\n";
        hanoi(n-1, B, A, C);
    }
}

int main() {
    ios::sync_with_stdio(0),cin.tie(0);
    while(cin >> n) {
        hanoi(n, 'A', 'B', 'C');
        cout << "\n";
    }
}
