#include <iostream>
#define int long long
using namespace std;

signed main() {
    int b, N, times;  
    cin >> times;
    while(times--) {
        cin >> N;
        cout << "1 " << N-2 << " 1" << endl;
    }
}
// 1 + LCM(1,b,1) + 1 = N