// https://zerojudge.tw/ShowProblem?problemid=d827
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    n = ((n / 12)*50 + ((n%12) <= 10)*(n%12)*5 + (((n%12) > 10)*((n%12)))*5);
    cout << n;
}
