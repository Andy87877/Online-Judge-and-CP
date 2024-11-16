#include <iostream>
using namespace std;

int main() {
    int arr_day[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    int Month1, Day1;
    cin >> Month1 >> Day1;

    int num1 = 0;
    for (int i = 0; i < Month1 - 1; i++) {
        num1 += arr_day[i];
    }
    num1 += Day1;

    int Month2, Day2;
    cin >> Month2 >> Day2;

    int num2 = 0;
    for (int i = 0; i < Month2 - 1; i++) {
        num2 += arr_day[i];
    }
    num2 += Day2;

    int ans = num2 - num1;
    if (num2 < num1) {
        ans = 365 - (num1 - num2);
    }

    cout << ans << "\n";
}