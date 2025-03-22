// Generic Application
#include <iostream>
using namespace std;
template<class T>
T Addition(T Arr[], int iSize)
{
    T iSum = 0;
    int i = 0;
    for (i = 0; i < iSize; i++)
    {
        iSum = iSum + Arr[i];
    }
    return iSum;
}
int main()
{

    float Brr[] = {10.4, 20.6, 30.3, 40.2};
    float iRet = 0;

    iRet = Addition(Brr, 4);
    cout << "Addition is:" << iRet << "\n";
    
    return 0;
}