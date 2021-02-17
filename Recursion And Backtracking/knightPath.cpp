#include <bits/stdc++.h>
using namespace std;

int bSize = 8;
int possMoves = 8;
int xMoves[8] = {2, 1, -1, -2, -2, -1, 1, 2};
int yMoves[8] = {1, 2, 2, 1, -1, -2, -2, -1};

bool isSafe(vector<vector<int>> &board, int r, int c){
    return (r >= 0 && r < bSize && c >= 0 && c < bSize && board[r][c] == 0);
}
bool knightHelper(vector<vector<int>> &board, int r, int c, int count){
    if (count == bSize * bSize){
        return true;
    }
    for (int i = 0; i <= possMoves; i++){
        int nextXMove = r + xMoves[i];
        int nextYMove = c + yMoves[i];
        if (isSafe(board, nextXMove, nextYMove)){
            board[nextXMove][nextYMove] = count;
            if (knightHelper(board, nextXMove, nextYMove, count + 1)){
                return true;
            }
            else{
                board[nextXMove][nextYMove] = 0;
            }
        }
    }
    return false;
}
bool knightTour(){
    vector<vector<int>> board(bSize, vector<int>(bSize, 0));
    board[0][0] = 1;
    if (knightHelper(board, 0, 0, 2)) {
        cout << "Found it\n";
        for (vector<int> row : board) {
            for (int cell: row) {
                cout << cell << " ";
            }
            cout << endl ;
        }
        return true;
    } else {
        cout << "No Path Found" << endl ;
        return false;
    }

}
int main()
{
    knightTour();
}