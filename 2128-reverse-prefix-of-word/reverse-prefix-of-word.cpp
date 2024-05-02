class Solution {
public:
    int find(string word, char ch){
        for(int i=0; i<word.length(); ++i){
            if(word[i] == ch)
                return i;
        }
        return -1;
    }
    string reversePrefix(string word, char ch) {
        int end = find(word, ch), start = 0;
        if(end == -1)
            return word;
        
        while(end > start){
            swap(word[start++], word[end--]);
        }
        return word;
    }
};