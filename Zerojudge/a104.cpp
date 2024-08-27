// https://zerojudge.tw/ShowProblem?problemid=a104
#include <bits/stdc++.h>
#include <vector>
#define ll long long
using namespace std;

ll n, temp;

void judge(ll n) {
    vector<ll> v;
    for (int i = 0; i < n; i++) {
        cin >> temp;
        v.push_back(temp);
    }
    sort(v.begin(), v.end());
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << "\n";
}

int main() {
    while (cin >> n) {
        judge(n);
    }
}