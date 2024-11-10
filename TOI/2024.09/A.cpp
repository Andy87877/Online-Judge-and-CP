#include <bits/stdc++.h>
using namespace std;

int main() {
    int L, W, H, K;
    cin >> L >> W >> H >> K;

    // 都要整除
    if (L % K != 0 || W % K != 0 || H % K != 0) {
        cout << "0\n";
        return 0;
    }

    int ans = (L/K) * (W/K) * (H/K);
    cout << ans << "\n";
}
/*
你有一台專門切割起司的機器,可以將原本長寬高為 L、W 和 H 的起司切割
成邊長為 K 的正立方體。為了避免不必要的浪費,你希望在切割起司前確認不會
*/