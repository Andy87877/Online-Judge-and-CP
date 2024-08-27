// https://zerojudge.tw/ShowProblem?problemid=a010
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ll n, times, num;
    bool flag = false;
    cin >> n;
    num = n;
    for (ll i = 2; i <= num; i++) {
        times = 0;
        if (n == 1) {
            break;
        }
        while (n%i == 0) {
            times++;
            n /= i;
        }

        if (times) {
            if (flag) {
            cout << " * ";
            } else {
                flag = true;
            } 
            cout << i;
            if (times != 1) {
                cout << "^" << times;
            }
        }
    }
}