#include <bits/stdc++.h>
#define ll long long
#define Andy8787_want_AC ios::sync_with_stdio(0),cin.tie(0);cout.tie(0);
using namespace std;

string judge(){
    vector<ll> vec(3);
    cin >> vec[0] >> vec[1] >> vec[2];
    sort(vec.begin(), vec.end());

    if (vec[0]+vec[1] <= vec[2]) return "Oh! No!";
    if (vec[0]*vec[0]+vec[1]*vec[1] < vec[2]*vec[2]) return "Obtuse";
    if (vec[0]*vec[0]+vec[1]*vec[1] == vec[2]*vec[2]) return "Right";
    return "Acute";
}

int main() {
    Andy8787_want_AC
    cout << judge() << "\n";
}