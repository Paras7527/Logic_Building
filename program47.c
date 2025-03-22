#include<stdio.h>

void DisplayFactors(int iNo)
{
    int iCnt=0;
    printf("Factors Are:\n");
    for(iCnt=1;iCnt<iNo;iCnt++)
    {
        if(iNo%iCnt==0)
        {
            printf("%d\t",iCnt);
        }
    }
}

int main()
{
    int iValue=0;

    printf("Enter the Number:");
    scanf("%d",&iValue);

    DisplayFactors(iValue);    
    return 0;
}