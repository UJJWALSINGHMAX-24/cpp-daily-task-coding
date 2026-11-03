#include <iostream>

using namespace std;

int main()
{
    int size;

    cout << "--- DYNAMIC MEMORY & CLEANUP DEMO ---\n";
    cout << "Aapko kitne numbers ki memory (RAM) chahiye? Enter size: ";
    cin >> size;

    int *dynamicArray = new int[size];

    cout << "\nEnter " << size << " numbers:\n";
    for (int i = 0; i < size; i++)
    {
        cout << "Number " << i + 1 << ": ";
        cin >> dynamicArray[i];
    }

    cout << "\n--- Your Entered Numbers (from Dynamic RAM) ---\n";
    for (int i = 0; i < size; i++)
    {
        cout << "Element " << i << " = " << dynamicArray[i] << " (Address: " << (dynamicArray + i) << ")\n";
    }

    delete[] dynamicArray;

    dynamicArray = nullptr;

    cout << "\nMemory successfully deleted and RAM cleaned!\n";

    return 0;
}