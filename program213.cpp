#include<iostream>
using namespace std;
bool CheckBit(int iNo)
{
    int iMask=512;      //0x200[Hexadecimal format]
    int iResult=0;

    iResult=iNo & iMask;
    if(iResult == iMask)
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
    int iValue = 0;
    bool bRet = false;

    cout<<"Enter number: \n";
    cin>>iValue;

    bRet=CheckBit(iValue);

    if(bRet == 0)
    {
        cout<<"Bit is OFF\n";
    }
    else
    {
        cout<<"Bit is ON\n";
    }
    
    return 0;
}