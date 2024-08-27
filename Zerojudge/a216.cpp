#include <iostream>
#include <vector>
#define int long long
using namespace std;

signed main() {
    int num;

    while(cin >> num) {
        vector<int> f;
        vector<int> g;

        f.push_back(1);
        g.push_back(1);

        for (int i = 2; i <= num; i++) {
            f.push_back(f[i-2]+i);
        }
        for (int i = 2; i <= num; i++) {
            g.push_back(g[i-2]+f[i-1]);
        }
        cout << f[num-1] << ' ' << g[num-1] << endl;
    }
}
