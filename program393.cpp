//Specific Application
#include<iostream>
using namespace std;
int AdditionI(int No1,int No2)
{
    int Ans = 0;
    Ans = No1 + No2;
    return Ans;
}
int main()
{
    int iRet = 0;

    iRet = AdditionI(11, 10);

    cout<<"Addition is:"<<iRet<<"\n";

    return 0;
}