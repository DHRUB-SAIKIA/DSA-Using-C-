#include <iostream>
using namespace std;

const int ROWS = 6;
const int COLS = 7;

char board[ROWS][COLS];

void initialize_board() {
    for(int i = 0; i < ROWS; i++) {
        for(int j = 0; j < COLS; j++) {
            board[i][j] = '-';
        }
    }
}

void print_board() {
    for(int i = 0; i < ROWS; i++) {
        for(int j = 0; j < COLS; j++) {
            cout << board[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}

bool is_valid_move(int col) {
    if(col < 0 || col >= COLS) {
        return false;
    }
    if(board[0][col] != '-') {
        return false;
    }
    return true;
}

void make_move(int col, char player) {
    for(int i = ROWS-1; i >= 0; i--) {
        if(board[i][col] == '-') {
            board[i][col] = player;
            break;
        }
    }
}

bool check_win(char player) {
    // Check horizontal
    for(int i = 0; i < ROWS; i++) {
        for(int j = 0; j < COLS-3; j++) {
            if(board[i][j] == player && board[i][j+1] == player && board[i][j+2] == player && board[i][j+3] == player) {
                return true;
            }
        }
    }
    // Check vertical
    for(int i = 0; i < ROWS-3; i++) {
        for(int j = 0; j < COLS; j++) {
            if(board[i][j] == player && board[i+1][j] == player && board[i+2][j] == player && board[i+3][j] == player) {
                return true;
            }
        }
    }
    // Check diagonal (down-right)
    for(int i = 0; i < ROWS-3; i++) {
        for(int j = 0; j < COLS-3; j++) {
            if(board[i][j] == player && board[i+1][j+1] == player && board[i+2][j+2] == player && board[i+3][j+3] == player) {
                return true;
            }
        }
    }
    // Check diagonal (down-left)
    for(int i = 0; i < ROWS-3; i++) {
        for(int j = 3; j < COLS; j++) {
            if(board[i][j] == player && board[i+1][j-1] == player && board[i+2][j-2] == player && board[i+3][j-3] == player) {
                return true;
            }
        }
    }
    return false;
}

bool board_is_full() {
    for(int i = 0; i < ROWS; i++) {
        for(int j = 0; j < COLS; j++) {
            if(board[i][j] == '-') {
                return false;
            }
        }
    }
    return true;
}

int main() {
    char player1 = }'
