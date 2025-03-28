// https://leetcode.com/problems/the-two-sneaky-numbers-of-digitville/
class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        map<int, int> ma;
        for (auto i: nums){
            ma[i]++;
        }

        vector<int> answer;
        for (auto i: ma){
            if (i.second == 2){
                answer.push_back(i.first);
            }
        }
        return answer;
    }
};
