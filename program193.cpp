//Problems on N numbers
#include<iostream>
using namespace std;
class Array
{
    public:

    int *Arr;
    int iSize;

    Array(int A)              //Resource Allocation(constructor)
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
    
    int CountEven()
    {
        int iCnt=0,iCount=0;
        for(iCnt=0;iCnt<iSize;iCnt++)
        {
            if(Arr[iCnt]%2==0)
            {
                iCount++;
            }
        }
        return iCount;
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
    
    iRet=aobj.CountEven();
    cout<<"Number of even elements are:"<<iRet<<"\n";

    return 0;
}
