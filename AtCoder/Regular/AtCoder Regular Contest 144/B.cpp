// #include <bits/stdc++.h>
// #define ll long long
// #define Andy8787_want_AC ios::sync_with_stdio(0),cin.tie(0);cout.tie(0);
// using namespace std;
 
// ll sovle() {
//     ll N,a,b;
//     cin >> N >> a >> b;
//     ll total = 0;
//     vector<ll> A(N);
//     for (int i = 0; i < N; i++) {
//         cin >> A[i];
//         total += A[i];
//     }
//     if (a == b) {
//         return (total/N);
//     }
    
    
//     while (true) {
//         ll avg = (total/N);
//         total = 0;
//         ll give = 0;
//         bool flag = true;

//         for (int i = 0; i < N; i++) {
//             cout << A[i] << " ";
//         }
//         cout << "\n";



//         for (int i = 0; i < N; i++) {
//             if (A[i] > avg) {
//                 flag = false;
//                 give++;
//             }
//         }

//         if (flag) {
//             sort(A.begin(), A.end());
//             return A[0];
//         }
//         for (int i = 0; i < N; i++) {
//             if ((A[i] < avg) && (give >= 1)) {
//                 A[i] = (avg-A[i])/a;
//                 total += A[i];
//                 give--;
//             }
//         }

//         for (int i = 0; i < N; i++) {
//             if ((A[i] > avg) && (give == 0)) {
//                 A[i] -= (A[i]-avg);
//                 total += A[i];
//             } else if (A[i] > avg) {
//                 give--;
//             }
//         }

//     }
// }
 
// int main() {
//     Andy8787_want_AC
//     cout << sovle() << "\n";
// }