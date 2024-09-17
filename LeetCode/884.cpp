// https://leetcode.com/problems/uncommon-words-from-two-sentences/description/
class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
        map<string, int> ma;
        string tmp = "";

        for (char i: s1){
            if (i == ' '){
                ma[tmp]++;
                tmp = "";
            } else {
                tmp += i;
            }
        }
        ma[tmp]++;

        tmp = "";
        for (char i: s2){
            if (i == ' '){
                ma[tmp]++;
                tmp = "";
            } else {
                tmp += i;
            }
        }
        ma[tmp]++;

        vector<string> ans;
        for (auto i: ma){
            if (i.second == 1){
                ans.push_back(i.first);
            }
        }

        return ans;
    }
};