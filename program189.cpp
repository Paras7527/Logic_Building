//Problems on numbers
#include<iostream>
using namespace std;
class  Number
{
    public:
        int iNo1;

        Number(int A)
        {
            iNo1=A;
        }
        
        void DisplayFactors()
        {
            int iCnt=0;

            for(iCnt=1;iCnt<=iNo1/2;iCnt++)      
            {
                if(iNo1%iCnt==0)
                {
                cout<<iCnt<<"\t";
                }

            }
        }
};
int main()
{
    int iValue=0;

    cout<<"Enter number:\n";
    cin>>iValue;

    Number nobj(iValue);
    nobj.DisplayFactors();

    return 0;
}