#include <bits/stdc++.h>
#define ll long long
#define Andy8787_want_AC ios::sync_with_stdio(0),cin.tie(0);cout.tie(0);
using namespace std;

int main() {
    Andy8787_want_AC
    int m,a;
    cin >> m >> a;

    vector<int> vec(m);
    for (int i = 0; i < m; i++) {
        cin >> vec[i];
    }

    for (int i = 0; i < m; i++) {
        if (vec[i] >= a) break;
        a += vec[i];
    }
    cout << a << "\n";
}