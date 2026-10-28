class Solution {
public:
    unordered_map<string, string> table;

    string encode(string longUrl) {
        hash<string> string_hasher;
        size_t hash_value = string_hasher(longUrl);
        
        string shortUrl = to_string(hash_value);
        
        table[shortUrl] = longUrl;
        return shortUrl; 
    }

    string decode(string shortUrl) {
        return table[shortUrl];
    }
};
