#include <bits/stdc++.h>
#define ll long long
#define Andy8787_want_AC ios::sync_with_stdio(0),cin.tie(0);cout.tie(0);
using namespace std;

int main() {
    Andy8787_want_AC
    ll times;
    cin >> times;

    ll T[times], R[times], S[times], index[times];

    for (ll i = 0; i < times; i++){
        cin >> T[i] >> R[i] >> S[i];
        index[i] = i+1;
    }

    for (ll i = 0; i < times; i++){
        for (int j = 0; j < times; j++){
            if (T[i] > T[j]){
                swap(T[i], T[j]);
                swap(R[i], R[j]);
                swap(S[i], S[j]);
                swap(index[i], index[j]);
            } else if (T[i] == T[j]){
                if (S[i] > S[j]){
                    swap(T[i], T[j]);
                    swap(R[i], R[j]);
                    swap(S[i], S[j]);
                    swap(index[i], index[j]);
                } else if (S[i] == S[j]){
                    if (R[i] > R[j]){
                        swap(T[i], T[j]);
                        swap(R[i], R[j]);
                        swap(S[i], S[j]);
                        swap(index[i], index[j]);
                    } else if (R[i] == R[j]) {
                        if (index[i] > index[j]){
                            swap(T[i], T[j]);
                            swap(R[i], R[j]);
                            swap(S[i], S[j]);
                            swap(index[i], index[j]);
                        }
                    }
                }
            }
        }
    }

    for (ll i = 0; i < times; i++){
        cout << index[i] << " " << T[i] << " " << R[i] << " " << S[i] << "\n";
    }
}