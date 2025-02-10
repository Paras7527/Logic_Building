// Generic Application
#include <iostream>
using namespace std;
template <class T>
T Addition(T No1, T No2)
{
    T Ans = 0.0;
    Ans = No1 + No2;
    return Ans;
}
int main()
{
    double dRet = 0.0;
    int iRet = 0;
    float fRet = 0.0f;

    dRet = Addition(11.709, 10.212);
    cout << "Addition is:" << dRet << "\n";

    fRet = Addition(11.7f, 10.2f);
    cout << "Addition is:" << fRet << "\n";

    iRet = Addition(11, 10);
    cout << "Addition is:" << iRet << "\n";

    return 0;
}