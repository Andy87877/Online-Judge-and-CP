#include <bits/stdc++.h>
#define ll long long
#define Andy8787_want_AC ios::sync_with_stdio(0),cin.tie(0);cout.tie(0);
using namespace std;

string solve() {
    string s1, s2, s3;
    cin >> s1 >> s2;
    s3 = s1+s2;
    map<char, ll> ma;

    for (auto i: s1) {
        ma[i]++;
    }

    for (auto i: s2) {
        ma[i]--;
    }

    for (auto i: s3) {
        if (ma[i]) {
            return "No";
        }
    }
    return "Yes";
}

int main() {
    Andy8787_want_AC
    cout << solve() << "\n";
}