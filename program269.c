#include<stdio.h>
void DisplayR()
{
    static int iCnt=1;
    if(iCnt<=4)
    {
        printf("*\n");
        iCnt++;
        DisplayR();     //Recursive Call
    }
}
int main()
{
    DisplayR();
    return 0;
}
