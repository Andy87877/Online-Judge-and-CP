// https://open.kattis.com/problems/jollyjumpers
#include <bits/stdc++.h>
#define ll long long 
using namespace std;

int main() {
    ll n;
    while(cin >> n) {
        ll arr[n];
        for (ll i = 0; i < n; i++) {
            cin >> arr[i];
        }
        vector<int> vec;
        for (ll i = 0; i < n-1; i++) {
            vec.push_back(abs(arr[i]-arr[i+1]));
        }
        sort(vec.begin(), vec.end());

        bool ok = true;
        for (ll i = 0; i < n-2; i++) {
            // cout << vec[i] << " ";
            if (vec[i]+1 != vec[i+1]){
                ok = false;
                break;
            }
        }
        if (ok){
            cout << "Jolly\n";
        } else {
            cout << "Not jolly\n";
        }
    }
}