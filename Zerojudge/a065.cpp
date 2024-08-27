#include <bits/stdc++.h>
#define ll long long
#define Andy8787_want_AC ios::sync_with_stdio(0),cin.tie(0);cout.tie(0);
using namespace std;

int main() {
    Andy8787_want_AC
    string str;
    cin >> str;
    for (ll  i = 0; i < str.size()-1; i++) {
        cout << abs(int(str[i+1])-int(str[i]));
    }
}