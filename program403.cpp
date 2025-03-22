// Generic Application
#include <iostream>
using namespace std;

class Array
{
public:
    int *Arr;
    int iSize;
    Array(int length)
    {
        iSize = length;
        Arr = new int[iSize];
    }
    ~Array()
    {
        delete[] Arr;
    }
    void Accept()
    {
        int i = 0;
        cout << "Please enter the Values:\n";
        for (i = 0; i < iSize; i++)
        {
            cin >> Arr[i];
        }
    }
    void Display()
    {
        int i = 0;
        cout << "elements of the array:\n";
        for (i = 0; i < iSize; i++)
        {
            cout << Arr[i] << "\n";
        }
    }
    int Addition()
    {
        int i = 0;
        int iSum = 0;
        for (i = 0; i < iSize; i++)
        {
            iSum = iSum + Arr[i];
        }
        return iSum;
    }
};
int main()
{

    Array aobj(5);
    int iRet = 0;

    aobj.Accept();
    aobj.Display();

    iRet = aobj.Addition();
    cout << "Addition is:" << iRet;

    return 0;
}