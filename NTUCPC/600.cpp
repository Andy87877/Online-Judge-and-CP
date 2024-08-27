#include <bits/stdc++.h>
#define ll long long
#define Andy8787_want_AC ios::sync_with_stdio(0),cin.tie(0);cout.tie(0);
using namespace std;

int main() {
    Andy8787_want_AC

    vector<int> vec(3);
    int total = 0, mx, mi, ans;

    cin >> vec[0] >> vec[1] >> vec[2];
    total = vec[0]+vec[1]+vec[2];
    mx = max(vec[0], max(vec[1], vec[2]));
    mi = max(vec[0]*-1, max(vec[1]*-1, vec[2]*-1));
    mi *= -1;
    
    ans = total-mx-mi;
    cout << ans << "\n";
}