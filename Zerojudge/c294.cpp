// https://zerojudge.tw/ShowProblem?problemid=c294
#include <bits/stdc++.h>
#define ll long long
using namespace std;

string solve() {
    vector<ll> a(3);
    cin >> a[0] >> a[1] >> a[2];
    sort(a.begin(), a.end());

    cout << a[0] << " " << a[1] << " " << a[2] << "\n";
    if (a[0]+a[1] <= a[2]) return "No";
    if (a[0]*a[0]+a[1]*a[1] < a[2]*a[2]) return "Obtuse";
    if (a[0]*a[0]+a[1]*a[1] > a[2]*a[2]) return "Acute";
    return "Right";
}

int main() {
    cout << solve() << endl;
}