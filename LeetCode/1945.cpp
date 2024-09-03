// https://leetcode.com/problems/sum-of-digits-of-string-after-convert/description/
class Solution {
public:
    int getLucky(string s, int k) {
        int num = 0, tmp;
        string str = s;

        for (char ch: str){
            tmp = int(ch) - int('a')+1;
            if (tmp >= 10) num += tmp/10;
            num += tmp%10;
        }
        str = to_string(num);

        for (int i = 0; i < k-1; i++){
            num = 0;
            for (char ch: str){
                num += int(ch)-int('0');
            }
            str = to_string(num);
        }
        
        num = stoi(str);
        return num;
    }
};