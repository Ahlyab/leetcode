class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        map<char, int> letters;

        for(char c : magazine) {
            letters[c]++;
        }

        for(char c: ransomNote) {
            if(letters.find(c) == letters.end()) {
                return false;
            }

            if(letters[c] == 1) {
                letters.erase(c);
            }else{
                letters[c]--;
            }
        }

        return true;


    }
};