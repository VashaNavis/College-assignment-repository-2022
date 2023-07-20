#include <iostream>
using namespace std;

void display_board(char board[]);
bool is_valid_move(char board[], int move);
bool is_game_over(char board[]);

int main() {
    char board[9] = { '1', '2', '3', '4', '5', '6', '7', '8', '9' };
    int move;
    char player = 'X';

    display_board(board);

    while (!is_game_over(board)) {
        cout << "\nEnter move: \n";
        cin >> move;

        if (is_valid_move(board, move)) {
            board[move - 1] = player;
            display_board(board);

            if (is_game_over(board)) {
                break;
            }

            player = (player == 'X') ? 'O' : 'X';
        }
        else {
            cout << "Invalid move. Please try again." << endl;
            continue;
        }
    }

    cout << "\nGame over!" << endl;

    return 0;
}

// Function to display the board
void display_board(char board[]) {
    cout << endl;
    cout << board[0] << " " << board[1] << " " << board[2] << endl;
    cout << board[3] << " " << board[4] << " " << board[5] << endl;
    cout << board[6] << " " << board[7] << " " << board[8] << endl;
}

// Function to check if a move is valid
bool is_valid_move(char board[], int move) {
    return (board[move - 1] != 'X' && board[move - 1] != 'O' && move >= 1 && move <= 9);
}

// Function to check if the game is over
bool is_game_over(char board[]) {
    // Check rows
    if ((board[0] == board[1] && board[1] == board[2]) ||
        (board[3] == board[4] && board[4] == board[5]) ||
        (board[6] == board[7] && board[7] == board[8])) {
        return true;
    }

    // Check columns
    if ((board[0] == board[3] && board[3] == board[6]) ||
        (board[1] == board[4] && board[4] == board[7]) ||
        (board[2] == board[5] && board[5] == board[8])) {
        return true;
    }

    // Check diagonals
    if ((board[0] == board[4] && board[4] == board[8]) ||
        (board[2] == board[4] && board[4] == board[6])) {
        return true;
    }

    // Check if board is full
    for (int i = 0; i < 9; i++) {
        if (board[i] != 'X' && board[i] != 'O') {
            return false;
        }
    }

    return true;
}