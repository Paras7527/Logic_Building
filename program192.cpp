//Problems on N numbers(Most imp)
#include<iostream>
using namespace std;
class Array
{
    public:

    int *Arr;
    int iSize;

    Array(int A)            //Resourse allocation(Constructor)
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
        cout<<"values from the array are:";
        for(iCnt=0;iCnt<iSize;iCnt++)
        {
            cout<<Arr[iCnt]<<"\t";
        }
    }
   
};
int main()
{
    int iLength=0;

    cout<<"Enter number of elemments that you want to store:\n";
    cin>>iLength;

    Array aobj(iLength);

    aobj.Accept();
    aobj.Display();

    return 0;
}