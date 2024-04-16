#include<iostream>
#include<time.h>
using namespace std;

int main()
{
    srand(time(0));
    int x=rand()%1000;
    int count=0;
    int p=0;
    cout<<"WELCOME\n----------------------------------";
    while (p==0)
    {
        cout<<"\nEnter a number between 0 and 1000:\nEnter any other number to exit:\n";
        int n;
        cin>>n;
        if(n>x&&n<=1000&&n>=0)
        {
            cout<<"Your number is greater ";
            count++;
        }
        else if(n<x&&n<=1000&&n>=0)
        {
            cout<<"your number is lower";
            count++;

        }
        else if(n==x&&n<=1000&&n>=0)
        {
            cout<<"YOU WON!!!\n";
            count++;
            cout<<"NUMBER OF CHANCES : "<<count;
            break;

        }
        else
        {
            cout<<"You exit from the game!!!";
            break;
        }
    }
    return 0;
}