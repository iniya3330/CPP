#include<iostream>
using namespace std;
int time;
int speed();
int distance();
int main()
{
   cout<<"Speed and Distance calculator"<<endl;
   int choice;
   cout<<"enter the time(in minutes):";
   cin>>time;
   do{
    cout<<"_______MENU_______"<<endl<<"1.speed"<<endl<<"2.distance"<<endl<<"3.exit"<<endl;
    cout<<"Enter your choice:";
    cin>>choice;
    switch(choice)
    {
        case 1:
        speed();
        break;

        case 2:
        distance();
        break; 

        case 3:
        break;

        default:
        cout<<"invalid choice";

    }

   }while(choice!=3);
   return 0;
   
}
int speed()
{  int dis;
    cout<<"enter the distance:";
    cin>>dis;
    cout<<"speed is "<<dis/time<<endl;
}
int distance()
{
    int speed;
    cout<<"enter the speed:";
    cin>>speed;
    cout<<"Distance is "<<speed*time<<endl;

}