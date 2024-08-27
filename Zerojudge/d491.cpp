#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
    int a,b;
    cin >> a >> b;

    if (a > b) swap(a,b);
    if (a%2 != 0) a++;
    
    int ans = 0;
    for (int i = a; i <= b; i+=2) {
        ans += i;
    }
    cout << ans << "\n";
}
