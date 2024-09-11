class Solution {
public:
    int minBitFlips(int start, int goal) {
        
        string s = bitset<32>(start).to_string(); // 01100100
        string target = bitset<32>(goal).to_string();
        int count = 0;

        int i_start = s.find('1');
        int s_target = target.find('1');

        if(i_start == string::npos){
            i_start = 32;
        }else if(s_target == string::npos) {
            s_target = 32;
        }

        for(int i=min(i_start, s_target); i < s.size(); ++i) {
            if(s[i] != target[i]) {
                ++count;
            }
        }
        return count;
    }
};