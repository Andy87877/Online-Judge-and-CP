#include <bits/stdc++.h>
using namespace std;

int s,t,n;

void print1(int s,int t, int n) {
    for (int i = 0; i < t; i++) {
        for (int j = 0; j < (n+1)*t+s*n; j++) {
            cout << "*";
        }
        cout << "\n";
    }
}

void print2(int s,int t,int n) {
    for (int i = 0; i < s; i++) {
        for (int j = 0; j < n; j++) {
            for (int k = 0; k < t; k++) {
                cout << "*";
            }
            for (int k = 0; k < s; k++) {
                cout << ".";
            }
        }
        for (int k = 0; k < t; k++) {
            cout << "*";
        }
        cout << "\n";
    }
}

int main() {
    int total = 0;
    while (true) {
        total++;
        cin >> s >> t >> n;
        if ((s == 0) && (t == 0) && (n == 0)) {
            break;
        }
        cout << "Case " << total << ":\n";
        for (int i = 0; i < n; i++) {
            print1(s,t,n);
            print2(s,t,n);
        }
        print1(s,t,n);
        cout << "\n";
    }
}