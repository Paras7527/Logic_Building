// Generic Application
#include <iostream>
using namespace std;
template<class T>
T Addition(T No1, T No2)
{
    T Ans = 0.0;
    Ans = No1 + No2;
    return Ans;
}
int main()
{
    double dRet = 0.0;

    dRet = Addition(11.7, 10.2);

    cout << "Addition is:" << dRet << "\n";

    return 0;
}