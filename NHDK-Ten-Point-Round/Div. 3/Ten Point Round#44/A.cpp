#include <bits/stdc++.h>
#define ll long long
#define Andy8787_want_AC ios::sync_with_stdio(0),cin.tie(0);cout.tie(0);
using namespace std;

int main() {
    Andy8787_want_AC
    int times;
    string answer_str = "", tmp;
    cin >> times;

    for (int i = 0; i < times; i++){
        cin >> tmp;
        if (answer_str != ""){
            answer_str += "+";
        }

        answer_str += '"';
        answer_str += tmp;
        answer_str += '"';
    }

    cout << answer_str;
}