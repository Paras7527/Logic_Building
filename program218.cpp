#include<iostream>
using namespace std;
bool CheckBit(int iNo)
{
    int iMask=0xe000;
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
        cout<<"14th, 15th & 16th Bit is OFF\n";
    }
    else
    {
        cout<<"14th, 15th, & 16th Bits is ON\n";
    }
    
    return 0;
}

//  0000    0000    0000    0000    1110    0000    0000    0000
//  0       0       0       0       e       0       0       0
// . :0xe000

//DEC: 0 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 
//HEX: 0 1 2 3 4 5 6 7 8 9  a  b  c  d  e  f 