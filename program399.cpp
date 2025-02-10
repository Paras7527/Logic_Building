// specific Application
#include <iostream>
using namespace std;

float Addition(float Arr[], float iSize)
{
    float iSum = 0.0f;
    int i = 0.0f;
    for (i = 0; i < iSize; i++)
    {
        iSum = iSum + Arr[i];
    }
    return iSum;
}
int main()
{

    float Brr[] = {10.3f, 20.1f, 30.5f, 40.1f};
    float iRet = 0;

    iRet = Addition(Brr, 4);
    cout << "Addition is:" << iRet << "\n";

    return 0;
}