#include <iostream>
#include <cmath>
#define ll long long
using namespace std;

int main() {
    ll times, minin = 0;
    cin >> times;
    ll a[times];

    for (int i = 0; i < times; i++) {
        cin >> a[i];
        // 位置最小
        if (a[i] < a[minin]) {
            minin = i;
        }
    }

    cout << abs(minin-1);

}