class Solution {
public:
    int finalPositionOfSnake(int n, vector<string>& commands) {
        int i = 0, j = 0;

        vector<vector<int>> board(n, vector<int>(n));
        
        int value = 0;
        for (int row = 0; row < n; ++row) {
            for (int col = 0; col < n; ++col) {
                board[row][col] = value++;
            }
        }


        for(string &s : commands) {
            if(s == "DOWN") {
                ++i;
            }else if(s=="UP") {
                --i;
            }else if(s == "RIGHT") {
                ++j;
            }else if (s == "LEFT") {
                --j;
            }
        }
        return board[i][j];
    }
};