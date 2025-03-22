#include <iostream>
using namespace std;

class Array
{
public:
    int *Arr;
    int iSize;

    Array(int length); // Constructor declaration
    ~Array();          // Destructor declaration
    void Accept();
    void Display();
    int Addition();
};

Array::Array(int length)
{
    iSize = length;
    Arr = new int[iSize];
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

// Method to calculate the sum of array elements
int Array::Addition()
{
    int iSum = 0;
    for (int i = 0; i < iSize; i++)
    {
        iSum += Arr[i];
    }
    return iSum;
}

int main()
{
    Array aobj(5); // Create an Array object with size 5
    int iRet = 0;

    aobj.Accept();  // Accept elements from the user
    aobj.Display(); // Display the elements

    iRet = aobj.Addition(); // Calculate the sum of elements
    cout << "Addition is: " << iRet << "\n";

    return 0;
}
