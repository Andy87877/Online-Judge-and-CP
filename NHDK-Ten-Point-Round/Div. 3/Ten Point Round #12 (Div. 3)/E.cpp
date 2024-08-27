#include <iostream>
#define ll long long
using namespace std;

int main() {
    ll n, ans;
    cin >> n;

    if (n % 2 == 0) {
        ans = (3*n/2);
    } else {
        ans = (3*(n-1)/2)+1;
    }
    cout << ans << endl;
}
