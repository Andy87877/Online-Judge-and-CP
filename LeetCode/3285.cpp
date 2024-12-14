// https://leetcode.com/problems/find-indices-of-stable-mountains/description/
class Solution {
public:
    vector<int> stableMountains(vector<int>& height, int threshold) {
        vector<int> vec;

        for (int i = 0; i < height.size()-1; i++){
            if (height[i] > threshold){
                vec.push_back(i+1);
            }    
        }

        return vec;
    }
};
