//Problems on N numbers
#include<iostream>
using namespace std;
class Array
{
    public:

    int *Arr;
    int iSize;

    Array(int A)
    {
        iSize=A;
        Arr=new int[iSize];

    }
     ~Array()
    {
        delete[]Arr;        //Resource DeAllocation(Destructor)
    }
    void Accept()
    {
        int iCnt=0;
        cout<<"Enter the values:\n";
        for(iCnt=0;iCnt<iSize;iCnt++)
        {
            cin>>Arr[iCnt];
        }
    }

    void Display()
    {
        int iCnt=0;
        cout<<"values from the array are:\n";
        for(iCnt=0;iCnt<iSize;iCnt++)
        {
            cout<<Arr[iCnt]<<"\t";
        }
        cout<<"\n";
    }

   
};
int main()
{
    int iLength=0,iRet=0;

    cout<<"Enter number of elemments that you want to store:\n";
    cin>>iLength;

    Array aobj(iLength);

    aobj.Accept();
    aobj.Display();

    return 0;
}