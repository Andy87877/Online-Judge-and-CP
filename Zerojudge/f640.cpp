// https://zerojudge.tw/ShowProblem?problemid=f640
#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll slove();

int main() {
    cout << slove() << "\n";
}

ll slove() {
    string str;
    cin >> str;
    if (str == "f") {
        ll x = slove();
        return 2*x-3;
    } else if (str == "g") {
        ll x = slove();
        ll y = slove();
        return 2*x+y-7;
    } else if (str == "h") {
        ll x = slove();
        ll y = slove();
        ll z = slove();
        return 3*x-2*y+z;
    }
    return stoi(str);
};