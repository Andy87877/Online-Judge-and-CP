#include <bits/stdc++.h>
#define ll long long
#define Andy8787_want_AC ios::sync_with_stdio(0),cin.tie(0);cout.tie(0);
using namespace std;

int main() {
    Andy8787_want_AC
    string s;
    cin >> s;

    int n = s.size();

    for (int i = 0; i < n; i++){
        cout << s << "\n";
        char tmp = s[0];
        for (int j = 0; j < n-1; j++){
            s[j] = s[j+1];
        }
        s[n-1] = tmp;
    }
}