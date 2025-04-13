class Solution {
public:
    int findClosest(int x, int y, int z) {
        int xd = abs(z - x);
        int yd = abs(z - y);
        
        if (xd < yd) {
            return 1;
        }else if(yd < xd) {
            return 2;
        }

        return 0;
    }
};