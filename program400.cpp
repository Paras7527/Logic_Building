// specific Application
#include <iostream>
using namespace std;

double Addition(double Arr[], double iSize)
{
    double iSum = 0.0;
    int i = 0.0;
    for (i = 0; i < iSize; i++)
    {
        iSum = iSum + Arr[i];
    }
    return iSum;
}
int main()
{

    double Brr[] = {10.3, 20.1, 30.5, 40.1};
    double iRet = 0;

    iRet = Addition(Brr, 4);
    cout << "Addition is:" << iRet << "\n";

    return 0;
}