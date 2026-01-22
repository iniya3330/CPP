#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"enter the values of a and b";
    cin>>a>>b;
    int choice;
    cout<<"Enter your choice:";
    cin>>choice;
    switch(choice)
    {
        case 1:
        cout<<a+b;
        break;

        case 2:
        cout<<a-b;
        break;

        case 3:
        cout<<a*b;
        break;

        case 4:
        cout<<a/b;
        break;

        case 5:
        cout<<a%b;
        break;

        default:
        cout<<"enter a valid operator";


    }
    return 0;
}