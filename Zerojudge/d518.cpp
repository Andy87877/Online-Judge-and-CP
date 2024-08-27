// https://zerojudge.tw/ShowProblem?problemid=d518
#include <iostream>
#include <bits/stdc++.h>
#include <cmath>
#include <map>
#include <string>
#include <vector>
#include <algorithm>
#define ll long long
using namespace std;

ll times;
string str;
bool flag;

void judge(ll times) {
    map<string, int> ma;
    while(times--) {
        cin >> str;
        if (ma[str] == 0) {
            printf("New! %d\n",(ma.size()));
            ma[str] = ma.size();
        } else {
            printf("Old! %d\n",(ma[str]));
        }
    }
}
int main() {
    ios::sync_with_stdio(0),cin.tie(0);
    while(cin >> times) {
        judge(times);
    }
}
