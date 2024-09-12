// https://leetcode.com/problems/count-the-number-of-consistent-strings/description/?envType=daily-question&envId=2024-09-12
class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        map<char,int> ma;
        int ans = 0;
        for (char i: allowed){
            ma[i]++;
        }

        for (string now: words){
            map<char, int> tmp;
            for (char i: now){
                tmp[i]++;
            }

            bool flag = true;
            for (auto i: tmp){
                if (ma[i.first] == 0){
                    flag = false;
                    break;
                }
            }
            if (flag) ans++;
        }

        return ans;
    }
};