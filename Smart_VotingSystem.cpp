#include <iostream>
#include <string>
#include <vector>
#include <functional>
using namespace std;

struct VotingRecord
{
    string Name;
    int Age;
    string Country;
    string Status;
};

int main()
{
    string YouContinue;
    vector<VotingRecord> VotingHistory;

    while (true)
    {
        string UserName;
        string UserCountry;
        int UserAge;
        string CurrentStatus = "";

        cout << "-------------------------------\n";
        cout << "       VOTING MACHINE\n";
        cout << "-------------------------------\n\n";

        cout << "Enter Your Name : ";
        getline(cin, UserName);

        cout << "Enter Your Age : ";
        cin >> UserAge;
        cin.ignore(10000, '\n');

        cout << "Enter Your Country Name : ";
        cin >> UserCountry;
        cin.ignore(10000, '\n');

        if (UserAge >= 18 && UserCountry == "Bharat")
        {
            cout << "You Are Eligible For Vote!\n";
            CurrentStatus = "Eligible to Vote";
        }
        else if (UserCountry != "Bharat")
        {
            cout << "You Are Not a Bharat Member.\n";
            CurrentStatus = "Not a Bharat Member";
        }
        else
        {
            cout << "Age Minor [ Under 18 ].\n";
            CurrentStatus = "Minor (Under 18)";
        }

        VotingHistory.push_back({UserName, UserAge, UserCountry, CurrentStatus});

        cout << "\nDo you want to EXIT ? (Press 'N' to stop, or any other key to continue): ";
        cin >> YouContinue;
        cin.ignore(10000, '\n');

        if (YouContinue == "N" || YouContinue == "n")
        {
            cout << "Machine Shutting Down.\n";
            break;
        }

        cout << "\n";
    }

    string ViewHistory;
    cout << "\nDo you want to view Voting History? (Press 'Y' for Yes, or any other key to Exit): ";
    cin >> ViewHistory;
    cin.ignore(10000, '\n');

    if (ViewHistory == "Y" || ViewHistory == "y")
    {
        cout << "\n-----------------------------\n";
        cout << "      VOTING SESSION HISTORY   \n";
        cout << "-------------------------------\n";

        if (VotingHistory.empty())
        {
            cout << "No history recorded.\n";
        }
        else
        {
            for (size_t a = 0; a < VotingHistory.size(); a++)
            {
                cout << " Record - 0" << (a + 1) << "\n\n";
                cout << "  Name    : " << VotingHistory[a].Name << "\n";
                cout << "  Age     : " << VotingHistory[a].Age << "\n";
                cout << "  Country : " << VotingHistory[a].Country << "\n";
                cout << "  Status  : " << VotingHistory[a].Status << "\n";
                cout << "-------------------------------\n";
            }
        }
    }
    else
    {
        cout << "Exiting without showing history. Thank you!\n";
    }

    std::cout << "Bahane ke liye koi key dabayein...";
    std::cin.ignore();
    std::cin.get();

    return 0;
}
