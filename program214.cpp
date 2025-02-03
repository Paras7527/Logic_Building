#include<iostream>
using namespace std;
bool CheckBit(int iNo)
{
    int iMask=0x44;      //3rd and 7th bit
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
        cout<<"3rd and 7th Bits are OFF\n";
    }
    else
    {
        cout<<"3rd and 7th Bits are ON\n";
    }
    
    return 0;
}