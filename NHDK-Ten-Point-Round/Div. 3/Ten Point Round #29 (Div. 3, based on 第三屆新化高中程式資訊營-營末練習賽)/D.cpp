#include <bits/stdc++.h>
#define ll long long
#define Andy8787_want_AC ios::sync_with_stdio(0),cin.tie(0);cout.tie(0);

using namespace std;

int main() {
    Andy8787_want_AC
    float temp;
    cin >> temp;
    string ans = "";
    ans = to_string(temp);

    long long plz = 0;
    bool flag = true;
    for (auto i: ans) {
        if (flag) {
            if ((i != '0') || (i != '.')){
                plz += int(i - '0');
                plz *= 10;
                flag = false;
            }
        } else {
            if (i != '.'){
                plz += int(i - '0');
                plz *= 10;
            }
        }
    }

    int check = 0;
    flag = true;
    while (plz%10 == 0) {
        plz /= 10;
        check++;
        if (check >= 69) {
            flag = false;
            break;
        }
    }
    if (flag) {
        cout << plz << endl;
    } else {
        cout << "0\n";
    }
}