#include<iostream>
using namespace std;

int main()
{
    float cp, sp, result;

    cout << "Enter cost Price: ";
    cin >> cp;

    cout << "Enter Selling Price: ";
    cin >> sp;

    result = sp-cp;

    if(result > 0)
    {
        cout << "Profit = " << result;
    }
    else if(result < 0)
    {
        cout << "Loss = " << -result;
    }
    else
    {
        cout << "No Profit No Loss";
    }

    return 0;
}
