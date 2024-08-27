// https://zerojudge.tw/ShowProblem?problemid=d277
#include <iostream>
using namespace std;

int main() {
    long long n;
    while(cin >> n) {
        cout << n-((n%2)!=0) << endl;
    }
}
