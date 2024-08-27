#include <iostream>
#include <algorithm>
#include <string>
#define ll long long
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
	cin.tie(0);
    
    ll times;
    cin >> times;
    char str;
    ll num, arr[times];
    for (int i = 0; i < times; i++) {
        cin >> str >> num;
        arr[i] = num*7;
        if (str == 'C') {
            arr[i] += 0;
        } else if (str == 'D') {
            arr[i] += 1;
        } else if (str == 'E') {
            arr[i] += 2;
        } else if (str == 'F') {
            arr[i] += 3;
        } else if (str == 'G') {
            arr[i] += 4;
        } else if (str == 'A') {
            arr[i] += 5;
        } else if (str == 'B') {
            arr[i] += 6;
        }
    }

    ll ans = 0;

    for (int i = 0; i < times; i++) {
        for (int j = i+1; j < times; j++) {
            if (arr[i] < arr[j]) {
                for (int k = j+1; k < times; k++) {
                    if (arr[j] < arr[k]) {
                        ans++;
                    }
                }
            }
        }
    }
    cout << ans;
}