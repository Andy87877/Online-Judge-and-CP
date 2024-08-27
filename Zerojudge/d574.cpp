// https://zerojudge.tw/ShowProblem?problemid=d574
#include <iostream>
#include <string>
#include <vector>
#define int long long
using namespace std;

signed main() {
    int n;
    while(cin >> n) {
        string s;
        cin >> s;

        // index裡要先有東西 底下if才能判斷
        vector<char> str = {' '};
        vector<int> times = {0};

        for (auto it : s){
            if (str[str.size()-1] == it) {
                times[times.size()-1] += 1;
            } else {
                str.push_back(it);
                times.push_back(1);
            }
        }
        
        if ((times.size()-1)*2 >= n) {
            cout << s;
        } else {
            for (int i = 1; i < times.size(); i++) {
                cout << times[i] << str[i];
            }
        }
        cout << endl;
    }
}
