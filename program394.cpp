// Specific Application
#include <iostream>
using namespace std;
float AdditionF(float No1, float No2)
{
    float Ans = 0;
    Ans = No1 + No2;
    return Ans;
}
int main()
{
    float fRet = 0.0f;

    fRet = AdditionF(11.7f, 10.2f);

    cout << "Addition is:" << fRet << "\n";

    return 0;
}