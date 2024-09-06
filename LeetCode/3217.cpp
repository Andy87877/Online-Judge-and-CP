// https://leetcode.com/problems/delete-nodes-from-linked-list-present-in-array/description/
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
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
        ListNode* now = head;
        vector<ListNode*> vec_List;

        map<int, int> ma;

        for (int i = 0; i < nums.size(); i++){
            ma[nums[i]]++;
        }

        while (now != nullptr){
            if (ma[now->val] == 0){ // add
                ListNode* tmp = new ListNode();
                tmp->val = now->val;
                vec_List.push_back(tmp);
            }
            now = now->next;
        }
        
        for (int i = vec_List.size()-2; i >= 0; i--){
            ListNode* tmp = vec_List[i];
            tmp -> next = vec_List[i+1];
            vec_List[i] = tmp;
        }

        return vec_List[0];
    }
};