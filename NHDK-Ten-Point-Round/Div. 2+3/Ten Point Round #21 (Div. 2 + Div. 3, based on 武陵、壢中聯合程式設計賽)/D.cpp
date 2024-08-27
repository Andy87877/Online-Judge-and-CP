#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <vector>
#include <map>
#define ll long long
using namespace std;

int main() {
    ll n, temp;
    cin >> n;
    map<ll, ll> judge;
    vector<ll> a, vec;
    for (ll i = 0; i < n*2; i++) {
        cin >> temp;
        a.push_back(temp);
        judge[temp]++;
    }
    
    if (judge.size() == 1) {
        cout << n;
        return 0;
    } 

    for (auto i: judge) {
        vec.push_back(i.second);
    }
    sort(vec.rbegin(), vec.rend());
    while (true) {
        sort(vec.rbegin(), vec.rend());
        if (vec[0] == 0) {
            cout << 0;
            return 0;
        } else if (vec[1] == 0) {
            cout << (vec[0]/2);
            return 0;
        }
        vec[0]--;
        vec[1]--;
    }
}
