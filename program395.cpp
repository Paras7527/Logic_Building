// Specific Application
#include <iostream>
using namespace std;
double AdditionD(double No1, double No2)
{
    double Ans = 0.0;
    Ans = No1 + No2;
    return Ans;
}
int main()
{
    double dRet = 0.0;

    dRet = AdditionD(11.7, 10.2);

    cout << "Addition is:" << dRet << "\n";

    return 0;
}