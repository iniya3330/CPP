#include<iostream>
using namespace std;
int main()
{
    int s1,s2,s3;
    cout<<"enter three sides";
    cin>>s1;
    cin>>s2;
    cin>>s3;

    if(s1+s2>s3 && s2+s3>s1 && s1+s3>s2)
    {
        cout<<"VALID TRIANNGLE";
    }
    else{
        cout<<"INVALID TRIANNGLE";
    }
}