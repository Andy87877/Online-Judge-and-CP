#include <bits/stdc++.h>
#define ll long long 
using namespace std;

int main() {
    string str;
    cin >> str;
    for (ll i = 0; i < str.size()-1; i++) {
        cout << str[i] << "-";
    }
    cout << str[str.size()-1];
}