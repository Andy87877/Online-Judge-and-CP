// https://www.hackerrank.com/challenges/30-binary-numbers/problem?h_r=email&isFullScreen=true
#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
int solve (int n);


int main()
{
    string n_temp;
    getline(cin, n_temp);

    int n = stoi(ltrim(rtrim(n_temp)));
    cout << solve(n) << "\n";
    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}

int solve (int n) {
    string str = "";
    while (n != 0) {
        if (n%2) {
            str += "1";
        } else {
            str += "0";
        }
        n/=2;
    }
    
    int temp = 0, ma = 0;
    for (int i = 0; i < str.size(); i++) {
        if (str[i] == '1') {
            temp++;
        } else {
            temp = 0;
        }
        if (ma < temp) {
            ma = temp;
        }
    }
    
    return ma;
}