#include <bits/stdc++.h>
#define ll long long
#define Andy8787_want_AC ios::sync_with_stdio(0),cin.tie(0);cout.tie(0);
using namespace std;

string solve(string s1, string s2) {
    unordered_map<char,ll> ma, ma2;
    for (auto i: s1) ma[i]++;
    for (auto i: s2) ma2[i]++;
    for (auto i: ma) {
        if (ma[i.first] != ma2[i.first]) return "no\n";
    }
    return "yes\n";
}

int main() {
    Andy8787_want_AC
    string s1,s2;
    while (1){
        cin >> s1;
        if (s1 == "STOP!!") break;
        cin >> s2;
        cout << solve(s1,s2);
    }
}