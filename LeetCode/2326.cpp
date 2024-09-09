//
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> spiralMatrix(int m, int n, ListNode* head) {
        ListNode* List_now = head;
        
        pair<int,int> dir[4] = {{0,1},{1,0},{0,-1},{-1,0}};
        pair<int,int> now = {0,-1};
        int d = 0;

        int arr[m][n];
        memset(arr, -1, sizeof(arr));

        while (List_now != nullptr){
            now.first += dir[d].first;
            now.second += dir[d].second;
            bool flag = false;
            if (now.first == m || now.first == -1 || now.second == n || now.second == -1){
                flag = true;
            } else if (arr[now.first][now.second] != -1){
                flag = true;
            }
            
            if (flag){
                now.first -= dir[d].first;
                now.second -= dir[d].second;
                d++; if (d == 4) d = 0;
                continue;
            }

            arr[now.first][now.second] = List_now -> val;
            List_now = List_now->next;

            // for (int i = 0; i < m; i++){
            //     for (int j = 0; j < n; j++){
            //         cout << arr[i][j] << " ";
            //     }
            //     cout << endl;
            // }
            // cout << endl;
        }

        vector<vector<int>> vec;
        for (int i = 0; i < m; i++){
            vec.push_back({});
            for (int j = 0; j < n; j++){
                vec[i].push_back(arr[i][j]);
            }
        }

        return vec;
    }
};