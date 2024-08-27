#include <iostream>
#include <string>
#include <cmath>
#include <vector>
#define ll unsigned long long
using namespace std;

ll judge() {
    ll a,b, temp;
    cin >> a >> b;

    if (a > b) {
        temp = a;
        a = b;
        b = temp;
    }

    for (ll i = 2; i < b; i++) {
        if ((a % i) == (b % i)) {
            return i;
        }
    } 

    cout << -1;
    return 0;
}

int main() {
    ll test = judge();
    if (test != 0) {
        cout << test;
    }
    return 0; 
}