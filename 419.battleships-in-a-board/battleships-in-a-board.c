int countBattleships(char** board, int boardRowSize, int boardColSize) {
    int ans = 0;
    for (int i = 0; i < boardRowSize; i++)
        for (int j = 0; j < boardColSize; j++) {
            if (board[i][j] == 'X') {
                if ((i > 0) && (board[i-1][j] == 'X')) continue;
                if ((j > 0) && (board[i][j-1] == 'X')) continue;
                ans ++;
            }
        }
    return ans;
}