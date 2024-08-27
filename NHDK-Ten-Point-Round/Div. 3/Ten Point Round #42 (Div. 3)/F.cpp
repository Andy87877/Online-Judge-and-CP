#include <bits/stdc++.h>
#define ll long long
#define Andy8787_want_AC ios::sync_with_stdio(0),cin.tie(0);cout.tie(0);
using namespace std;

int main() {
    Andy8787_want_AC
    ll n;
    cin >> n;

    vector<ll> vec(n);
    for (ll i = 0; i < n; i++){
        cin >> vec[i];
    }
    sort(vec.begin(), vec.end());

    ll ans = vec[0]+vec[1]+vec[2];
    cout << ans << "\n";
}
/*
S1 最大值 找第二小的
S2 最小值 第三小的
S3 最小公倍數 找最小的
-->找三小的:D
*/