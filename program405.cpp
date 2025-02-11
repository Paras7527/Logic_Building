#include <iostream>
using namespace std;

class Array
{
public:
    float *Arr;
    int iSize; 

    Array(int length); 
    ~Array();         
    void Accept();
    void Display();
    float Addition();
};

Array::Array(int length)
{
    iSize = length;
    Arr = new float[iSize]; 
}

Array::~Array()
{
    delete[] Arr;
}
void Array::Accept()
{
    cout << "Please enter the values:\n";
    for (int i = 0; i < iSize; i++)
    {
        cin >> Arr[i];
    }
}
void Array::Display()
{
    cout << "Elements of the array:\n";
    for (int i = 0; i < iSize; i++)
    {
        cout << Arr[i] << "\n";
    }
}
float Array::Addition()
{
    float iSum = 0.0f;
    for (int i = 0; i < iSize; i++)
    {
        iSum += Arr[i];
    }
    return iSum;
}

int main()
{
    Array aobj(5); 
    float fRet = 0.0f;

    aobj.Accept();  
    aobj.Display(); 

    fRet = aobj.Addition(); 
    cout << "Addition is: " << fRet << "\n";

    return 0;
}
