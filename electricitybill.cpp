#include<iostream>
using namespace std;

int main()
{
    int units;
    float bill = 0;

    cout << "Enter electricity units consumed: ";
    cin >> units;

    if(units <= 100)
    {
        bill = units * 1;
    }
    else if(units <= 200)
    {
        bill = (100 * 1) + (units - 100) * 2;
    }
    else
    {
        bill = (100 * 1) + (100 * 2) + (units - 200) * 3;
    }

    cout << "Total Electricity Bill = ₹" << bill;

    return 0;
}
