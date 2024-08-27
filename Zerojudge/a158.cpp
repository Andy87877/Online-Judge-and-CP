// https://zerojudge.tw/ShowProblem?problemid=a158
#include <iostream>
#include <sstream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
#define int long long

int gcd(int a, int b) {
    if (b == 0) {
        return a;
    } else {
        return gcd(b, a%b);
    }
}

void judge(string str) {
    stringstream ss;
    int num;

    vector<int> v;
    ss << str;
    
    while(ss >> num) {
        v.push_back(num);
    }

    int max = -1;
    for (int i = 0; i < v.size(); i++) {
        for (int j = i+1; j < v.size(); j++) {
            if (max < gcd(v[i], v[j])) {
                max = gcd(v[i], v[j]);
            }
        }
    }
    cout << max << endl;
}

signed main() {
    string times;
    string str;
    getline(cin, times);
    // getline 好難用QQ
    while(getline(cin, str)) {
        judge(str);
    }
}
