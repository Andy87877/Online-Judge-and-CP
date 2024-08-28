#include <bits/stdc++.h>
#define ll long long
#define Andy8787_want_AC ios::sync_with_stdio(0),cin.tie(0);cout.tie(0);
using namespace std;

int main() {
    Andy8787_want_AC
    int n;
    cin >> n;

    if (n == 1) {
        printf("1");
        return 0;
    }

    int arr[n];
    arr[0] = 1; arr[1] = 1;
    printf("1 1 ");
    for (int i = 2; i < n; i++){
        arr[i] = arr[i-2]+arr[i-1];
        printf("%d ", arr[i]);
    }
}