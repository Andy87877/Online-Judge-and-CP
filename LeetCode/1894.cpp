// https://leetcode.com/problems/find-the-student-that-will-replace-the-chalk/
class Solution {
public:
    int chalkReplacer(vector<int>& chalk, int k) {
        long now, times, total = 0, ans = chalk.size()-1;

        for (long i = 0; i < chalk.size(); i++){
            total += chalk[i];
        }

        times = k/total;
        now = k - total*times;

        for (long i = 0; i < chalk.size(); i++){
            // cout << now << "\n";
            if (now <= 0){
                if (now < 0){
                    ans = i-1;
                    if (ans == -1) ans = chalk.size()-1;
                } else {
                    ans = i;
                }
                break;
            }

            now -= chalk[i];
        }
        

        return ans;
    }
};