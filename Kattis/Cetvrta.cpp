// https://open.kattis.com/problems/cetvrta
#include <bits/stdc++.h>
using namespace std;

int main() {
    int a,b;
    map<int,int> x;
    map<int,int> y;
    for (int i = 0; i < 3; i++) {
        cin >> a >> b;
        x[a]++;
        y[b]++;
    }
    for (auto i: x) {
        if (i.second == 1) {
            cout << i.first << " ";
        }
    }
    for (auto i: y) {
        if (i.second == 1) {
            cout << i.first << "\n";
        }
    }
}