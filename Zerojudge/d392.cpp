// https://zerojudge.tw/ShowProblem?problemid=d392
#include <iostream>
#include <string>
#include <sstream>
#define int long long
using namespace std;

void judge(string str) {
    stringstream ss; // 一個
    int n, total = 0;
    ss << str;
    while (ss >> n) {
        total += n;
    }
    cout << total << endl;
}

signed main() {
    string str;
    while(getline(cin, str)){ // 可以接受字串有空白
        judge(str);
    }
}
/*
stringstream
https://dotblogs.com.tw/v6610688/2013/11/08/cplusplus_stringstream_int_and_string_convert_and_clear
*/
