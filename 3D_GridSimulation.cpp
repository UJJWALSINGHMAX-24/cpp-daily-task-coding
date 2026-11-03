#include <iostream>

using namespace std;

int main()
{

    int room[2][3][3] = {

        {{1, 1, 1},
         {1, 0, 1},
         {1, 1, 1}},
        {{1, 1, 1},
         {1, 2, 3},
         {1, 1, 1}}};

    cout << "--- 3D ROOM & WORLD SIMULATION ---\n";

    for (int floor = 0; floor < 2; floor++)
    {
        cout << "\n--- Floor " << floor + 1 << " ---\n";

        for (int row = 0; row < 3; row++)
        {
            for (int col = 0; col < 3; col++)
            {

                int val = room[floor][row][col];
                if (val == 1)
                    cout << "# ";
                else if (val == 0)
                    cout << ". ";
                else if (val == 2)
                    cout << "P ";
                else if (val == 3)
                    cout << "W ";
            }
            cout << "\n";
        }
    }

    cout << "\nLegend: # = Wall, . = Empty, P = Player, W = Water\n";

    return 0;
}