#include <iostream>
using namespace std;

int main() {
    int arr_day[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    int Mouth1, Day1;
    cin >> Mouth1 >> Day1;

    int num1 = 0;
    for (int i = 0; i < Mouth1 - 1; i++) {
        num1 += arr_day[i];
    }
    num1 += Day1;

    int Mouth2, Day2;
    cin >> Mouth2 >> Day2;

    int num2 = 0;
    for (int i = 0; i < Mouth2 - 1; i++) {
        num2 += arr_day[i];
    }
    num2 += Day2;

    int ans = num2 - num1;
    if (num2 < num1) {
        ans = 365 - (num1 - num2);
    }

    cout << ans << "\n";
}
