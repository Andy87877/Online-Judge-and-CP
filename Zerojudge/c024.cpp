// https://zerojudge.tw/ShowProblem?problemid=c024
#include <iostream>
using namespace std;

int main() {
    long long total = 1, n, times;
    
    while (true) {
        cin >> n;
        if (n < 0) {
            break;
        }
        total = 1;
        for (long long i = 1; i <= n; i++) {
            total += i;
        }
        cout << total << endl;
    }
    
}	
//1 1+1
//2 1+1+2
//3 1+1+2+3
