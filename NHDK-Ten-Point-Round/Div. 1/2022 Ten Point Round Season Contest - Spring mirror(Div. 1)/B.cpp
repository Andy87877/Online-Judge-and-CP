#include <iostream>
#include <algorithm>
#include <string>
#include <cmath>
#include <vector>
#define ll long long
using namespace std;

// int judge() {
//     ll k, ans, temp, times = 0;
//     cin >> k;
//     temp = k;

    
// }

int main() {
    // ll q;
    // cin >> q;
    // for (int i = 0; i < q; i++) {
    //     cout << judge() << " ";
    // }

    vector<ll> test = {0};

    while (test.size() <= pow(10,1)) {
        for (auto i: test) {
            test.push_back(i+1);
            test.push_back(i+2);
        }
    }
    for (auto i: test) {
        cout << i << " ";
    }
}