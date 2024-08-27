// https://zerojudge.tw/ShowProblem?problemid=a273
#include <iostream>
#define int long long
using namespace std;

signed main() {
    int n, k;
    while(cin >> n >> k) {
        if (k == 0) {
            if (n == 0) {
                cout << "Ok!" << endl;
            } else {
                cout << "Impossib1e!" << endl;
            }
        } else if ((n%k) == 0) {
            cout << "Ok!" << endl;
        } else {
            cout << "Impossib1e!" << endl; 
        }
    }
}
