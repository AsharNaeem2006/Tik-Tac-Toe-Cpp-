#include <iostream>
using namespace std;

class TicTacToe {
private:
    char board[3][3];
    char player;

public:
    // Constructor
    TicTacToe() {
        char ch = '1';
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                board[i][j] = ch++;
            }
        }
        player = 'X';
    }

    // Display Board
    void displayBoard() {
        cout << "\n";
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                cout << " " << board[i][j];
                if (j < 2)
                    cout << " |";
            }
            cout << endl;
            if (i < 2)
                cout << "---|---|---" << endl;
        }
        cout << endl;
    }

    // Check Winner
    bool checkWin() {
        // Rows
        for (int i = 0; i < 3; i++) {
            if (board[i][0] == board[i][1] &&
                board[i][1] == board[i][2])
                return true;
        }

        // Columns
        for (int i = 0; i < 3; i++) {
            if (board[0][i] == board[1][i] &&
                board[1][i] == board[2][i])
                return true;
        }

        // Diagonals
        if (board[0][0] == board[1][1] &&
            board[1][1] == board[2][2])
            return true;

        if (board[0][2] == board[1][1] &&
            board[1][1] == board[2][0])
            return true;

        return false;
    }

    // Check Draw
    bool checkDraw() {
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                if (board[i][j] != 'X' && board[i][j] != 'O')
                    return false;
            }
        }
        return true;
    }

    // Make Move
    void makeMove() {
        int choice;
        cout << "Player " << player << ", Enter position (1-9): ";
        cin >> choice;

        int row = (choice - 1) / 3;
        int col = (choice - 1) % 3;

        if (choice < 1 || choice > 9 ||
            board[row][col] == 'X' ||
            board[row][col] == 'O') {
            cout << "Invalid Move! Try Again.\n";
            return;
        }

        board[row][col] = player;

        if (checkWin()) {
            displayBoard();
            cout << "Player " << player << " Wins!\n";
            exit(0);
        }

        if (checkDraw()) {
            displayBoard();
            cout << "Game Draw!\n";
            exit(0);
        }

        // Switch Player
        if (player == 'X')
            player = 'O';
        else
            player = 'X';
    }
};

int main() {
    TicTacToe game;   // Object

    while (true) {
        game.displayBoard();
        game.makeMove();
    }

    return 0;
}