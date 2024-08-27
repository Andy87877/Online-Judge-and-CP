#include <iostream>
#define ll long long
using namespace std;

int main() {
    ll total = 1, a, b;
    
    for (int i = 0; i < 4; i++) {
        cin >> a >> b;
        if (total+a > total*b) {
            total += a;
        } else {
            total *= b;
        }
    }
    cout << total << endl;
}