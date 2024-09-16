// https://leetcode.com/problems/minimum-time-difference/description/
class Solution {
public:
    int findMinDifference(vector<string>& timePoints) {
        vector<int> vec;
        for (string i: timePoints){
            int tmp;
            tmp = ((int(i[0])-int('0'))*10+(int(i[1])-int('0')))*60;
            tmp += ((int(i[3])-int('0'))*10+(int(i[4])-int('0')));
            // cout << tmp << "\n";
            vec.push_back(tmp);
        }
        sort(vec.begin(), vec.end());

        int ans = 999999999;
        int tmp;
        for (int i = 0; i < vec.size()-1; i++){
            tmp = abs(vec[i]-vec[i+1]);
            ans = min(ans, tmp);
            ans = min(ans, 1440-tmp);
        }
        tmp = abs(vec[0]-vec[vec.size()-1]);
        ans = min(ans, tmp);
        ans = min(ans, 1440-tmp);
        
        return ans;
    }
};