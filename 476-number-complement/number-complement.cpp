class Solution {
public:
    int findComplement(int num) {
        string binary = bitset<32>(num).to_string();

        size_t pos = binary.find('1');
        string n = "";
        if(pos != string::npos) {
            for(int i = pos; i < binary.size(); ++i) {
                n += binary[i];
            }
        }else {
            return 1;
        }

        for(char &c : n) {
            c = c=='0' ? '1' : '0';
        }

        return stol(n,0,2);

    }
};