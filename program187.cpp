#include<iostream>
using namespace std;
void DisplayFactors(int iNo)
{
    int iCnt=0,iFact=1;

    for(iCnt=1;iCnt<iNo;iCnt++)
    {
        if(iNo%iCnt==0)
        {
            cout<<iCnt<<"\t";
        }
    }
}
int main()
{
    int iValue=0;

    cout<<"Enter number:\n";
    cin>>iValue;

    DisplayFactors(iValue);

    return 0;
}