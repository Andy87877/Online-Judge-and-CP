// https://open.kattis.com/problems/hailstone
#include <bits/stdc++.h>
using namespace std;
long long n, ans = 0;

long long h(long long n) {
    ans += n;
    if (n == 1) {
        return ans;
    }
    if (n%2) {
        return h(3*n+1);
    } else {
        return h(n/2);
    }
}

int main() {
    cin >> n;
    cout << h(n) << endl;
}