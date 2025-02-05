#include<stdio.h>

void DisplayR(int iNo)
{
    static int iCnt=1;
    if(iCnt<=iNo)
    {
        printf("%d\t",iCnt);
        iCnt++;
        DisplayR(iNo);
    }
    
    
}

int main()
{
    int iValue=0;

    printf("Enter the freq:\n");
    scanf("%d",&iValue);

    DisplayR(iValue);

    printf("\nEnd of main");
    
    return 0;
}