#include <bits/stdc++.h>
using namespace std;

int main() {
   int n,m,l,q, temp;
   while(cin >> n >> m >> l >> q){
      vector<int> vec[n+2];
      queue<int> que;

      int a,b;
      // 關係
      for (int i = 0; i < m; i++) {
         cin >> a >> b;
         vec[a].push_back(b);
      }

      // 0:無 1:沒變有 2:本來有
      int state[n+2] = {0};

      // 問題廠商
      for (int i = 0; i < l; i++) {
         cin >> temp;
         state[temp] = 2;
         que.push(temp);
      }

      // 汙染 重要!!!!!!
      while (!que.empty()) {
         for (int i = 0; i < vec[que.front()].size(); i++) {
            if (state[vec[que.front()][i]] == 0) {
               state[vec[que.front()][i]] = 1;
               que.push(vec[que.front()][i]);
            }
         }
         que.pop();
      }

      // 查詢
      for (int i = 0; i < q; i++) {
         cin >> temp;
         if (state[temp] == 1 || state[temp] == 2) {
            cout << "TUIHUOOOOOO\n";
         } else {
            cout << "YA~~\n";
         }
      }
   }
}