#include <iostream>
#include <vector>
#include <string>

using namespace std;

void ShowHistory(const vector<string> &History)
{
    cout << "--- Calculator History ---\n";
    if (History.empty())
    {
        cout << "History Not Available\n";
    }
    else
    {
        for (size_t a = 0; a < History.size(); a++)
        {
            cout << (a + 1) << " " << History[a] << endl;
        }
    }
    cout << "-------------------------------" << endl;
}

int main()
{

    vector<string> CalculatorHistory;
    bool RunCalculator = true;

    while (RunCalculator)
    {
        char Choice;

        cout << "1 : Choose Option ( + , - , * / ) : " << endl;
        cout << "2 : Show History > Press ( H / h ) : " << endl;
        cout << "3 : Clear Memory > Press ( C / c ) : " << endl;
        cout << "4 : Exit Calculator > Press ( Q / q ) : " << endl;
        cout << "5 : Choose Any Option and Press Enter : ";
        cin >> Choice;
        if (Choice == 'Q' || Choice == 'q')
        {
            cout << "Exit Calculator\n";
            RunCalculator = false;
        }
        else if (Choice == 'H' || Choice == 'h')
        {
            ShowHistory(CalculatorHistory);
        }
        else if (Choice == 'C' || Choice == 'c') // FIX 2: 'h' ki jagah 'c'
        {
            CalculatorHistory.clear();
            cout << "History and Memory Clear Successfully\n";
        }
        else if (Choice == '+' || Choice == '-' || Choice == '*' || Choice == '/')
        {
            double Num1, Num2;
            cout << "Enter Your First Number : ";
            cin >> Num1;
            cout << "Enter Your Second Number : ";
            cin >> Num2;

            double Result = 0;
            bool Success = true;
            string Record;

            if (Choice == '+')
            {
                Result = Num1 + Num2;
                Record = to_string(Num1) + " + " + to_string(Num2) + " = " + to_string(Result);
            }
            else if (Choice == '-')
            {
                Result = Num1 - Num2;
                Record = to_string(Num1) + " - " + to_string(Num2) + " = " + to_string(Result);
            }
            else if (Choice == '*') // FIX 3: '-' ki jagah '*'
            {
                Result = Num1 * Num2;
                Record = to_string(Num1) + " * " + to_string(Num2) + " = " + to_string(Result);
            }
            else if (Choice == '/')
            {
                if (Num2 != 0)
                {
                    Result = Num1 / Num2;
                    Record = to_string(Num1) + " / " + to_string(Num2) + " = " + to_string(Result);
                }
                else
                {
                    cout << "Error: Division by zero is not allowed!" << endl;
                    Success = false;
                }
            }
            if (Success)
            {
                cout << "\nResult : " << Result << endl;
                CalculatorHistory.push_back(Record);
            }
        }
        else
        {
            cout << "Invalid choice! Please select a valid option." << endl;
        }
    }
    return 0;
}