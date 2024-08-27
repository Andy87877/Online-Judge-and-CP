// https://open.kattis.com/problems/jumbojavelin
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,l,total = 1;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> l;
        total += l;
    }
    total -= n;
    cout << total << "\n";
}