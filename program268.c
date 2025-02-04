#include<stdio.h>
void DisplayR()
{
    int iCnt=1;     //Storage class AUTO
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
