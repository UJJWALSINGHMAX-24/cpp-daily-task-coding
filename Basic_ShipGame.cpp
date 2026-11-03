#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    bool Ships[4][4] = {
        {0, 0, 1, 0}, {0, 0, 1, 0}, {1, 0, 0, 0}, {0, 0, 1, 0}};

    int Hits = 0;
    int NumberOfTrun = 0;

    while (Hits < 4)
    {
        int Row, Colum;
        cout << "Selecting Coordinates\n";

        cout << "Choose a Row Number between 0 and 3 : ";
        cin >> Row;

        cout << "Choose a Colum Number Between 0 and 3 : ";
        cin >> Colum;

        if (Ships[Row][Colum])
        {
            Ships[Row][Colum] = 0;

            Hits++;

            cout << "Hits " << (4 - Hits) << "Left.\n\n";
        }
        else
        {
            cout << "Shot Miss.\n\n";
        }

        NumberOfTrun++;
    }
    cout << "Victory\n";
    cout << "You Won in " << NumberOfTrun << " Turns";
    return 0;
}
