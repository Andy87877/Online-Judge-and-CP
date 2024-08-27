#include <bits/stdc++.h>
#define ll long long
#define Andy8787_want_AC ios::sync_with_stdio(0),cin.tie(0);cout.tie(0);
using namespace std;

ll solve() {
    vector<string> vec(20);
    vector<string> ans;
    for (int i = 0; i < 20; i++) {
        cin >> vec[i];
    }

    for (int i = 0; i < 20; i++) {
        if (vec[i][1] == '3') {
            ans.push_back(vec[i]);
        } else {
            string want = "";
            want += vec[i][0];
            if (vec[i][1] == '2'){
                want +='3';
                // cout << want << endl;
            } else if (vec[i][1] == '1') {
                want +='2';
            } else if (vec[i][1] == '4') {
                want +='3';
            } else {
                want +='4';
            }
            for (auto j: ans) {
                if (j == want) {
                    ans.push_back(vec[i]);
                }
            }
        }
    }
    return ans.size();
}

int main() {
    Andy8787_want_AC
    ll t;
    cin >> t;
    while (t--) {
        cout << solve() << "\n";
    }
}