class Solution {
public:
    bool validTicTacToe(vector<string>& board) {
         int xCount = 0, oCount = 0;

        // Count the number of X's and O's
        for (const string& row : board) {
            for (char cell : row) {
                if (cell == 'X') xCount++;
                else if (cell == 'O') oCount++;
            }
        }

        // Check the counts of X's and O's
        if (oCount > xCount || xCount > oCount + 1) {
            return false; // Invalid counts
        }

        // Function to check if a player has won
        auto hasWon = [&](char player) {
            // Check rows and columns
            for (int i = 0; i < 3; ++i) {
                if ((board[i][0] == player && board[i][1] == player && board[i][2] == player) ||
                    (board[0][i] == player && board[1][i] == player && board[2][i] == player)) {
                    return true;
                }
            }
            // Check diagonals
            return (board[0][0] == player && board[1][1] == player && board[2][2] == player) ||
                   (board[0][2] == player && board[1][1] == player && board[2][0] == player);
        };

        bool xWins = hasWon('X');
        bool oWins = hasWon('O');

        // Check win conditions
        if (xWins && oWins) {
            return false; // Both players cannot win simultaneously
        }
        if (xWins && xCount != oCount + 1) {
            return false; // X wins but it's not X's turn
        }
        if (oWins && xCount != oCount) {
            return false; // O wins but it's not O's turn
        }

        return true; // Valid board configuration
    }
};