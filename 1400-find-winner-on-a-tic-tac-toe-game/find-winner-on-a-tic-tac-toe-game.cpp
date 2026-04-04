class Solution {
public:
    string tictactoe(vector<vector<int>>& moves) 
    {
        // Initialize a 3x3 board
        vector<vector<char>> board(3, vector<char>(3, ' '));
        
        // Fill the board based on the moves
        for (int i = 0; i < moves.size(); i++) {
            // Determine which player's turn it is
            char player = (i % 2 == 0) ? 'A' : 'B';
            board[moves[i][0]][moves[i][1]] = player;
        }
        
        // Check for a win condition
        for (int i = 0; i < 3; i++) {
            // Check rows and columns
            if ((board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0] != ' ') || 
                (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[0][i] != ' ')) {
                return (board[i][0] == 'A' || board[0][i] == 'A') ? "A" : "B";
            }
        }
        
        // Check diagonals
        if ((board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[0][0] != ' ') || 
            (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[0][2] != ' ')) {
            return (board[1][1] == 'A') ? "A" : "B";
        }
        
        // Check for a tie or ongoing game
        return (moves.size() == 9) ? "Draw" : "Pending";
    }
};
