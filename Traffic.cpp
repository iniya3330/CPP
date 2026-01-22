#include<iostream>
using namespace std;
int main()
{
    string str;
    cout<<"Enter the string";
    cin>>str;
    if(str=="RED")
    {
        cout<<"STOP";
    }
    else if(str=="GREEN")
    {
        cout<<"GO";
    }
    else
    {
        cout<<"SLOW DOWN";
    }
}