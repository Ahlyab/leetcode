#include <string>
class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        vector<string> res;
        vector<int> temp = score;
        sort(temp.rbegin(), temp.rend());

        for(int i = 0; i<score.size(); ++i) {
            if(score[i] == temp[0]) {
                res.push_back("Gold Medal");
            }else if(score[i] == temp[1]) {
                res.push_back("Silver Medal");
            }else if(score[i] == temp[2]) {
                res.push_back("Bronze Medal");
            }else{
                int t = getPosition(temp, score[i]);
                res.push_back(to_string(t));
            }
        }

        return res;
    }

    int getPosition(vector<int>& score, int target) {
        for(int i=0; i<score.size(); ++i) {
            if(score[i] == target) {
                return i+1;
            }
        }
        return 0;
    }
};