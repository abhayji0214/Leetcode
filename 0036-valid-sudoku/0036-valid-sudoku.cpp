class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {

        for (int i = 0; i < 9; i++) {
            for (int j = 0; j < 9; j++) {

                if (board[i][j] == '.')
                    continue;

                char num = board[i][j];

                for (int col = 0; col < 9; col++) {
                    if (col != j && board[i][col] == num)
                        return false;
                }

                for (int row = 0; row < 9; row++) {
                    if (row != i && board[row][j] == num)
                        return false;
                }

                int srow = (i / 3) * 3;
                int scol = (j / 3) * 3;

                for (int r = srow; r < srow + 3; r++) {
                    for (int c = scol; c < scol + 3; c++) {
                        if ((r != i || c != j) && board[r][c] == num)
                            return false;
                    }
                }
            }
        }

        return true;
    }
};