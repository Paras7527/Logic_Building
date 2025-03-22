#include <iostream>
using namespace std;
template <class T>
class Array
{
public:
    T *Arr;
    int iSize;

    Array(int length);
    ~Array();
    void Accept();
    void Display();
    T Addition();
};
template <class T>
Array<T>::Array(int length)
{
    iSize = length;
    Arr = new T[iSize];
}
template <class T>
Array<T>::~Array()
{
    delete[] Arr;
}
template <class T>
void Array<T>::Accept()
{
    cout << "Please enter the values:\n";
    for (int i = 0; i < iSize; i++)
    {
        cin >> Arr[i];
    }
}
template <class T>
void Array<T>::Display()
{
    cout << "Elements of the array:\n";
    for (int i = 0; i < iSize; i++)
    {
        cout << Arr[i] << "\n";
    }
}
template <class T>
T Array<T>::Addition()
{
    T iSum = 0;
    for (int i = 0; i < iSize; i++)
    {
        iSum += Arr[i];
    }
    return iSum;
}

int main()
{
    Array <float>aobj(5);
    float fRet = 0.0f;

    aobj.Accept();
    aobj.Display();

    fRet = aobj.Addition();
    cout << "Addition is: " << fRet << "\n";

    return 0;
}
