// https://leetcode.com/problems/xor-queries-of-a-subarray/description/
class Solution {
public:
    vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& queries) {
        vector<int> ans;
        for (int t = 0; t < queries.size(); t++){
            int tmp = arr[queries[t][0]];
            // cout << tmp << " ";
            for (int i = queries[t][0]+1; i <= queries[t][1]; i++){
                tmp ^= arr[i];
                // cout << arr[i] << " ";
            }
            // cout << endl;
            ans.push_back(tmp);
        }

        return ans;
    }
};