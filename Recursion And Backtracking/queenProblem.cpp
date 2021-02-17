#include <bits/stdc++.h>
using namespace std;
bool isSafe(vector<vector<bool>> &board, int row, int col, int N){
    int r, c;
    for (c = 0; c < col; c++){
        if (board[row][c])
            return false;
    }
    for (r = row, c = col; r >= 0 && c >= 0; r--, c--){
        if (board[r][c])
            return false;
    }
    for (r = row, c = col; c >= 0 && r < N; r++, c--)
        if (board[r][c])
            return false;
    return true;
}
bool queenHelper(vector<vector<bool>> &board, int col, int N)
{
    if (col >= N)
        return true;
    for (int row = 0; row < N; row++){
        if (isSafe(board, row, col, N)){
            board[row][col] = true;
            if (queenHelper(board, col + 1, N))
                return true;
            board[row][col] = false;
        }
    }
    return false;
}
bool generateNQueen(int N)
{
    vector<vector<bool>> board(N, vector<bool>(N, false));
    if (!queenHelper(board, 0, N)){
        return false;
    }
    else{
        for (vector<bool> row : board){
            for (int cell : row){
                cout << (cell == true ? 1 : 0) << " ";
            }
            cout << endl ;
        }
        return true;
    }
}

int main()
{
    generateNQueen(12);
}