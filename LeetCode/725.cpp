// https://leetcode.com/problems/split-linked-list-in-parts/description/
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
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
        vector<ListNode*> ans;
        vector<ListNode*> vec;

        ListNode* now = head;

        while (now != nullptr){
            ListNode* tmp = new ListNode();
            tmp->val = now->val;
            vec.push_back(tmp);

            now = now->next;
        }

        int times = vec.size()/k, mods = vec.size()%k;
        int begin = times-(mods == 0), end = 0;

        if (k > vec.size()){
            for (int i = 0; i < vec.size(); i++){
                ans.push_back(vec[i]);
            }
            for (int i = vec.size(); i < k; i++){
                ListNode* tmp = new ListNode();
                tmp = nullptr;
                ans.push_back(tmp);
            }

            return ans;
        }

        for (int i = 1; i <= k; i++){
            now = new ListNode();

            cout << begin << " " << end << endl;
            if (begin < vec.size()) {
                for (int j = begin-1; j >= end; j--){
                    ListNode* tmp = vec[j];
                    tmp->next = vec[j+1];
                    vec[j] = tmp;
                }
                now = vec[end];
            }
            ans.push_back(now);

            end = begin+1;
            begin = begin + times + (mods > i);
        }

        return ans;
    }
};
// 0~3 4~6 7~9