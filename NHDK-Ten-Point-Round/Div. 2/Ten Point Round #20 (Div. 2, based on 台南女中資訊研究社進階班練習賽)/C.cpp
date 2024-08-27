#include <iostream>
#include <string>
#include <vector>
#define ll long long
using namespace std;

int main() {
    ll n,k;
    cin >> n >> k;
    ll a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    ll total = 0, temp;
    for (int i = 0; i < n; i++) {
        temp = 0;
        for (int j = i; j < n; j++) {
            temp += a[j];
            if (k >= temp) {
                total++;
            }
        }
    }
    cout << total << endl;
}