#include <iostream>
#include <string>

using namespace std;

int main()
{
    string choice;
    do
    {
        double n1,n2 = 0;
        double result = 0;

        cout << "\n<-------------------->" << endl;
        cout << "<--yet-another-calc-->" << endl;
        cout << "<-------------------->\n" << endl;

        // first input
        cout << "enter-number-1: ";
        cin >> n1;

        // second input
        cout << "enter-number-2: ";
        cin >> n2;

        // letting the user choose an option
        cout << "\nselect-an-option!\n" << endl;
        cout << "\t+ >-add" << endl;
        cout << "\t- >-subtract" << endl;
        cout << "\t* >-multiply" << endl;
        cout << "\t/ >-divide" << endl;
        cout << "\nyour-choice: ";

        // in case where n1 is not a number
        if (!(cin >> n1))
        {
            cout << "invalid input! use an actual number" << endl;
            cin.clear();
            cin.ignore(10000, '\n');
            continue;
        }
            
        string op;
        cin >> op;

        if (op == "+")
        {
            result = n1 + n2;
            cout << endl;
            cout << "your-result: " << n1 << " + " << n2 << " = " << result << endl;
        }
        else if (op == "-")
        {
            result = n1 - n2;
            cout << endl;
            cout << "your-result: " << n1 << " - " << n2 << " = " << result << endl;
        }
        else if (op == "*")
        {
            result = n1 * n2;
            cout << endl;
            cout << "your-result: " << n1 << " * " << n2 << " = " << result << endl;
        }
        else if (op == "/")
        {
            if (n == 0)
            {
                cout << "\nerror: you dont get to divide by zero!" << endl;
            }
        }
            else
        {
            result = n1 / n2;
            cout << endl;
            cout << "your-result: " << n1 << " / " << n2 << " = " << result << endl;
        }
        else
        {
            cout << endl;
            cout << "thats-not-a-valid-option-dummy" << endl;
        }

        cout << endl;
        cout << "would-u-like-to-try-again?\n\t<y-yes>-<n-no>: ";
        cin >> choice;
        for (auto &c : choice) c = toupper(c);

    } while (choice == "Y" || choice == "YES");

    cout << "\nbye =)" << endl;
    return 0;
}
