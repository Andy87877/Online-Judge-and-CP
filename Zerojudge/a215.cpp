#include <iostream>
#define int long long
using namespace std;

signed main() {
    int n, m;
    while(cin >> n >> m) { 
        int total = n;
        int i = 0;
        while (total <= m) {
            i++;
            total += (n+i);
        }
        cout << i+1 << endl;
    }
}
