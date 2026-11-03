#include <iostream>

using namespace std;

int main()
{

    char board[3][3] = {{'1', '2', '3'}, {'4', '5', '6'}, {'7', '8', '9'}};
    int choice;
    char mark;
    int player = 1;

    cout << "--- TIC-TAC-TOE GAME (2D Array) ---\n";

    for (int turn = 0; turn < 9; turn++)
    {

        cout << "\n";
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                cout << board[i][j] << " ";
            }
            cout << "\n";
        }

        player = (turn % 2 == 0) ? 1 : 2;
        mark = (player == 1) ? 'X' : 'O';

        cout << "Player " << player << " (" << mark << "), enter position (1-9): ";
        cin >> choice;

        int row = (choice - 1) / 3;
        int col = (choice - 1) % 3;

        if (board[row][col] != 'X' && board[row][col] != 'O')
        {
            board[row][col] = mark;
        }
        else
        {
            cout << "Invalid move! Try again.\n";
            turn--;
        }
    }

    cout << "\nGame Over!\n";
    return 0;
}