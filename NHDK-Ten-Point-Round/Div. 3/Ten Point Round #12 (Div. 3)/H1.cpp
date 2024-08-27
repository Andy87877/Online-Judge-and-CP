#include <iostream>
#define ll long long
using namespace std;

int main() {
    ll a,b,c, total = 0;
    cin >> a >> b >> c;

    if ((a+b > c) && (a+c > b) && (b+c > a)) {
        total += 7;
    }
    if (a%2 == b%2 && b%2 == c%2) {
        total += 5;
    } else {
        ll a1 = 0;
        if (a % 2) {
            a1++;
        }
        if (b % 2) {
            a1++;
        }
        if (c % 2) {
            a1++;
        }
        if (a1 == 2) {
            total += 1;
        } else {
            total += 2;
        }
    }
    cout << total << endl;
}