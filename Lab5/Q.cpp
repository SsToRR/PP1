#include <bits/stdc++.h>
using namespace std;
    
int n, m, board[10][10];
    
int main() {
    
    cin >> n >> m;
    
    board[n][m] = 1;
    
    for(int i = 0; i < 8; i++){
        if(board[i][m] == 0) board[i][m] = 2;
        if(board[n][i] == 0) board[n][i] = 2;
    }
    for(int i = n, j = m; i >= 0 && j >= 0; i--, j--)
        if(board[i][j] == 0) board[i][j] = 2;
    
    for(int i = n, j = m; i < 8 && j < 8; i++, j++) 
        if(board[i][j] == 0) board[i][j] = 2;
        
    for(int i = n, j = m; i < 8 && j >= 0; i++, j--)
        if(board[i][j] == 0) board[i][j] = 2;
    
    for(int i = n, j= m; i >= 0 && j < 8; i--, j++)
        if(board[i][j] == 0) board[i][j] = 2;
    
    for(int i = 0; i < 8; i++){
        for(int j = 0; j < 8; j++){
            cout << board[i][j] << ' ';
        }
        cout << endl;
    }
    
    return 0;
}
