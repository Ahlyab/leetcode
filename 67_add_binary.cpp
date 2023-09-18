#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    string addBinary(string a, string b) {
        string res = "";
        int carry = 0;

        int i=a.size()-1, j=b.size()-1;
        int r;

        while(i>=0 && j>=0) {
            if(a[i]== '0' && b[j] == '0') {
                r = 0 + 0  + carry;

            }else if(a[i]== '0' && b[j] == '1') {
                r = 0 + 1  + carry;

            }else if(a[i]== '1' && b[j] == '0') {
                r = 1 + 0  + carry;

            }else if(a[i]== '1' && b[j] == '1') {
                r = 1 + 1  + carry;

            }
            carry = r/2;
            r = r%2;
            res = to_string(r) + res;
            --i; --j;
        }
        
        while(i>=0) {
            if(a[i]== '0' && carry == 0) {
                r = 0  + carry;

            }else if(a[i]== '0' && carry == 1) {
                r = 0   + carry;

            }else if(a[i]== '1' && carry == 0) {
                r = 1  + carry;

            }else if(a[i]== '1' && carry == 1) {
                r = 1  + carry;

            }
            carry = r/2;
            r = r%2;
            res = to_string(r) + res;
            --i;
        }

        while(j>=0) {
            if(b[j]== '0' && carry == 0) {
                r = 0  + carry;

            }else if(b[j]== '0' && carry == 1) {
                r = 0   + carry;

            }else if(b[j]== '1' && carry == 0) {
                r = 1  + carry;

            }else if(b[j]== '1' && carry == 1) {
                r = 1  + carry;

            }
            carry = r/2;
            r = r%2;
            res = to_string(r) + res;
            --j;
        }

        if(carry > 0) {
            res = to_string(carry) + res;
        }

        // reverse(res.begin(), res.end());
        return res;
    }
};

int main() {

}