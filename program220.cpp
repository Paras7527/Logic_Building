#include<iostream>
using namespace std;
bool CheckBit(int iNo,int iPos)
{
    int iMask=0x1;
    iMask=iMask<<(iPos-1);
    int iResult=0;

    iResult=iNo&iMask;
    if(iResult==iMask)
    {
        return true;
    }
    else
    {
        return false;
    }
    
}
int main()
{
    int iValue = 0 , iLocation = 0;
    bool bRet = false;

    cout<<"Enter the number:\n";
    cin>>iValue;

    cout<<"Enter the position:\n";
    cin>>iLocation;

    bRet=CheckBit(iValue,iLocation);
    if(bRet == true)
    {
        cout<<"Bit is on\n";
    }
    else
    {
        cout<<"Bit is off\n";
    }
    return 0;
}