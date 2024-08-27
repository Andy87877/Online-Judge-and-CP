// https://open.kattis.com/problems/jobexpenses
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, temp, total = 0;
    cin >> n;
    while (n--) {
        cin >> temp;
        if (temp < 0) {
            total += temp*-1;
        }
    }
    cout << total << endl;
}