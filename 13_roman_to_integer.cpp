class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char, int> num;
        num['I'] = 1;
        num['V'] = 5;
        num['X'] = 10;
        num['L'] = 50;
        num['C'] = 100;
        num['D'] = 500;
        num['M'] = 1000;

        int sum = 0;

        for(int i=0; i<s.size(); ++i) {
            if( num[s[i]] < num[s[i+1]]) {
                sum = sum + (num[s[i+1]] - num[s[i]]);
                ++i;
            }else {
                sum += num[s[i]];         
            }
        }
        return sum;
    }
};
