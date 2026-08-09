class Solution {
public:

    bool isSafe(vector<vector<char>> &board, int row, int col,
                int m, int n, string &word, int index) {

        if(row < 0 || row >= m || col < 0 || col >= n) {
            return false;
        }

        if(board[row][col] != word[index]) {
            return false;
        }

        return true;
    }

    bool wordSearch(vector<vector<char>> &board, int row, int col,
                    int m, int n, string &word, int index) {

        if(index == word.size()) {
            return true;
        }

        if(!isSafe(board, row, col, m, n, word, index)) {
            return false;
        }

        char ch = board[row][col];
        board[row][col] = '#';

        bool found =
            wordSearch(board, row + 1, col, m, n, word, index + 1) ||
            wordSearch(board, row - 1, col, m, n, word, index + 1) ||
            wordSearch(board, row, col + 1, m, n, word, index + 1) ||
            wordSearch(board, row, col - 1, m, n, word, index + 1);

        board[row][col] = ch;

        return found;
    }

    bool exist(vector<vector<char>>& board, string word) {

        int m = board.size();
        int n = board[0].size();

        for(int i = 0; i < m; i++) {
            for(int j = 0; j < n; j++) {

                if(board[i][j] == word[0]) {

                    if(wordSearch(board, i, j, m, n, word, 0)) {
                        return true;
                    }
                }
            }
        }

        return false;
    }
};

