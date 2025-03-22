#include<stdio.h>

void DisplayI(int iNo)
{
    while(iNo>=1)
    {
        printf("%d\t",iNo);
        iNo--;
    }
    printf("\n");
    
    
}

int main()
{
    int iValue=0;

    printf("Enter the freq:\n");
    scanf("%d",&iValue);

    DisplayI(iValue);

    printf("End of main\n");
    
    return 0;
}