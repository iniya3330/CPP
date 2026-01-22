#include<iostream>
using namespace std;

int main()
{
    int original = 11, num;
    cout << "Welcome to the number guessing game";

    do
    {
        cout << endl << "Enter the number that you guess: ";
        cin >> num;

        // FIRST check correct answer
        if (num == original)
        {
            cout << "Yes you are correct!!!";
            break; // stop loop
        }

        // Only hints for wrong answers
        if (num < 50)
        {
            cout << "Good. Lower the value";

            if (num < 25)
            {
                cout << endl << "You're too near but guess again";

                if (num < 15)
                {
                    cout << endl << "Very small gap try again";
                }
            }
        }
        else
        {
            cout << "Sorry enter less than 50";
        }

    } while (true);

    return 0;
}
