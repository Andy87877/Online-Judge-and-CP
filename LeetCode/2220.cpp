// https://leetcode.com/problems/minimum-bit-flips-to-convert-number/description/
class Solution {
public:
    int minBitFlips(int start, int goal) {
        int a = start, b = goal;
        int ans = 0;

        while (a > 0 || b > 0){
            if (a%2 != b%2) ans++;
            a /= 2;
            b /= 2;
        }

        return ans;
    }
};