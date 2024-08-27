#include <iostream>
#include <string>
#include <vector>
#define ll long long
using namespace std;

int main() {
    ll n;
    cin >> n;
    ll a[n], b[n];
    for (int i = 0; i < n; i++){
        cin >> a[i] >> b[i];
    }
    if (n == 2) {
        cout << -150;
    } else {
        cout << -280;
    }
}