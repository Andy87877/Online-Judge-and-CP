#include <bits/stdc++.h>
#define ll long long
#define Andy8787_want_AC ios::sync_with_stdio(0),cin.tie(0);cout.tie(0);
using namespace std;

int main() {
    Andy8787_want_AC
    string s1, s2;
    cin >> s1;
    cin >> s2;

    ll a1 = 0;
    for (int i = 0; i < s1.size(); i++){
        a1 *= 10;
        char ch = s1[i];
        if (int('0') <= int(ch) && int(ch) <= int('9')){
            a1 += int(ch)-int('0');
        } else {
            int tmp = int(ch)-int('A')+1;
            if (tmp >= 10){
                a1 += (tmp/10);
                a1 *= 10;
                a1 += tmp%10;
            } else {
                a1 += tmp;
            }
        }
    }

    ll a2 = 0;
    for (int i = 0; i < s2.size(); i++){
        a2 *= 10;
        char ch = s2[i];
        if (int('0') <= int(ch) && int(ch) <= int('9')){
            a2 += int(ch)-int('0');
        } else {
            int tmp = int(ch)-int('A')+1;
            if (tmp >= 10){
                a2 += (tmp/10);
                a2 *= 10;
                a2 += tmp%10;
            } else {
                a2 += tmp;
            }
        }
    }

    cout << a1-a2 << endl;
}