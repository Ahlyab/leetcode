#include <string>
using namespace std;

class Solution {
public:
    int strStr(string haystack, string needle) {
        int res = haystack.find(needle); 
        return (res != string::npos)? res : -1;
    }
};