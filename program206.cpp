//Accept user from number and check whether second bit is on or off.
#include<iostream>
using namespace std;


int main()
{
    int iValue=0;
    int iMask=0x2;
    int iResult=0;

    cout<<"Enter number: \n";
    cin>>iValue;

    iResult=iValue & iMask;
    if(iResult == 0)
    {
        cout<<"Second bit is OFF\n";
    }
    else
    {
        cout<<"Secomd bit is ON\n";
    }
    return 0;
}