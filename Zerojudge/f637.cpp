#include <bits/stdc++.h>
#define ll long long
#define Andy8787_want_AC ios::sync_with_stdio(0),cin.tie(0);cout.tie(0);
using namespace std;

/*
用level來判斷現在的成數
當下的size代表分幾層
*/

int main() {
    Andy8787_want_AC
    string s;
    int n;
    cin >> s;
    cin >> n;

    
    
    if (s == "0") {
        cout << 0;
    } else if (s == "1") {
        cout << n*n;
    } else {

        vector<int> level;
        int ans = 0;
        for (auto i: s) {
            char now = i;
            if (now == '2') {
                level.push_back(0);
            } else if (now == '1') {
                ans += (n*n)/pow(4,level.size());
                level[level.size()-1]++;
            } else if (now == '0'){
                level[level.size()-1]++;
            }

            while (level[level.size()-1] == 4) {
                level.pop_back();
                if (level.size() != 0) {
                    level[level.size()-1]++;
                }
            }

            // for (auto j: level) {
            //     cout << j << " ";
            // }
            // cout << "\n";
        }


        cout << ans << "\n";
    }
}