// https://leetcode.com/problems/longest-subarray-with-maximum-bitwise-and/description/
class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int mx = -1;
        for (int i = 0; i < nums.size(); i++){
            mx = max(mx, nums[i]);
        }

        int ans = 0, tmp = 0;

        for (int i = 0; i < nums.size(); i++){
            if (nums[i] == mx){
                tmp++;
                ans = max(ans, tmp);
            } else {
                tmp = 0;
            }
        }

        return ans;
    }
};