// https://zerojudge.tw/ShowProblem?problemid=e283
#include <iostream>
using namespace std;

int main() {
    // 不會TLE
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int l[4], times;
    while(cin >> times) {
        for (int i = 0; i < times; i++) {
            for (int j = 0; j < 4; j++) {
                cin >> l[j];
            }
            if (l[0] == 0) {
                if (l[2] == 0) {
                    cout << 'A';
                } else if (l[1] == 1) {
                    cout << 'B';
                } else {
                    cout << 'C';
                }  
            } else {
                if (l[3] == 1) {
                    cout << 'D';
                } else if (l[1] == 0) {
                    cout << 'E';
                } else {
                    cout << 'F';
                } 
            }
        }
        cout << endl;
    }
}
