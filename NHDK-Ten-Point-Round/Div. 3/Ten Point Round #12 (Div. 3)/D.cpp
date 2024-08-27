#include <iostream>
#define ll long long
using namespace std;

int main() {
    ll n;
    cin >> n;

    if ((n % 4) == 1) {
        cout << 1;
    } else if ((n % 4) == 2) {
        cout << 2;
    } else if ((n % 4) == 3) {
        cout << 3;
    } else {
        cout << 4;
    }
}