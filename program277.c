#include<stdio.h>

void DisplayR(int iNo)
{
    if(iNo>=1)
    {
        printf("%d\t",iNo);
        iNo--;
        DisplayR(iNo);
    }
    printf("End of DisplayR\n");
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