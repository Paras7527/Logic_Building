#include<stdio.h>
void Display(int iNo)
{
    int iCnt=0;

    for(iCnt=1;iCnt<=iNo;iCnt++)
    {
        printf("Jay Ganesh...\n");
    }
}
int main()
    //Iteration Approach
{
    int iFrequency=0;

    printf("Enter the Frequency:");
    scanf("%d",&iFrequency);

    Display(iFrequency);

    return 0;
}