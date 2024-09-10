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
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        ListNode* now = head;
        vector<int> vec;
        
        while (now != nullptr){
            vec.push_back(now->val);
            now = now->next;
        }

        vector<int> mid;
        for (int i = 0; i < vec.size()-1; i++){
            int a = vec[i], b = vec[i+1];
            for (int j = min(a,b); j >= 1; j--){
                if (a%j == 0 && b%j == 0){
                    mid.push_back(j);
                    break;
                }
            }
        }

        vector<ListNode*> connet;
        ListNode* tmp;
        for (int i = 0; i < vec.size()-1; i++){
            tmp = new ListNode();
            tmp->val = vec[i];
            connet.push_back(tmp);

            tmp = new ListNode();
            tmp->val = mid[i];
            connet.push_back(tmp);
        }
        tmp = new ListNode();
        tmp->val = vec[vec.size()-1];
        connet.push_back(tmp);

        for (int i = vec.size()*2-2; i >= 1; i--){
            tmp = connet[i-1];
            tmp->next = connet[i];
            connet[i-1] = tmp;
        }

        return connet[0];
    }
};