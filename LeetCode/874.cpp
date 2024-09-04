// https://leetcode.com/problems/walking-robot-simulation/
class Solution {
public:
    int robotSim(vector<int>& commands, vector<vector<int>>& obstacles) {
        int dir = 0; // N E S W
        pair<int,int> move[4] = {{0,1},{1,0},{0,-1},{-1,0}};

        pair<int, int> now = {0,0};

        map<pair<int,int>, int> obs; // 障礙物

        for (vector<int> i: obstacles){
            obs[{i[0], i[1]}]++;
        }

        int ans = 0; // answer

        for (int i = 0; i < commands.size(); i++){
            if (commands[i] == -1){
                dir++;
                if (dir == 4) dir = 0;
                continue;
            }
            if (commands[i] == -2){
                dir--;
                if (dir == -1) dir = 3;
                continue;
            }

            for (int j = 0; j < commands[i]; j++){
                if (obs[{move[dir].first + now.first, move[dir].second + now.second}] == 1){
                    break;
                }
                now.first = move[dir].first + now.first;
                now.second = move[dir].second + now.second;
                ans = max(ans, now.first*now.first+now.second*now.second);
            }
            cout << now.first << " " << now.second << "\n";
        }

        return ans;
    }
};