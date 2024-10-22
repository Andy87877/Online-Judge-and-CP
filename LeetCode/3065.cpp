// https://leetcode.com/problems/minimum-operations-to-exceed-threshold-value-i/description/
class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        vector<int> vec = nums;

        sort(vec.rbegin(), vec.rend());

        int ans = vec.size();
        for (int i = 0; i < vec.size(); i++){
            if (vec[i] < k){
                break;
            }
            ans--;
        }

        return ans;
    }
};
