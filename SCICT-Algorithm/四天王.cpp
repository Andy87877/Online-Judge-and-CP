// https://hackmd.io/p9Y-PTzWRZyqknDq3oPeGQ#%E5%9B%9B%E5%A4%A9%E7%8E%8B
#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr[4], times;
    memset(arr, 0, sizeof(arr));

    cin >> times;
    for (int i = 0; i < times; i++) {
        int n;
        cin >> n;
        arr[n%4]++;
    }
    cout << "r2: " << arr[2] << "\n"; 
    cout << "r1: " << arr[1] << "\n"; 
    cout << "r3: " << arr[3] << "\n"; 
    cout << "r0: " << arr[0] << "\n"; 
}