#include <bits/stdc++.h>
#define ll long long
#define Andy8787_want_AC ios::sync_with_stdio(0),cin.tie(0);cout.tie(0);
using namespace std;

int main() {
    Andy8787_want_AC
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }

    for (int i = n-1; i >= 0; i--){
        for (int j = i+1; j < n; j++){
            if (arr[j] < arr[j-1]){
                swap(arr[j],arr[j-1]);
            }
        }
    }

    for (int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
}