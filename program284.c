#include<stdio.h>

int CountEvenI(int iNo)
{
    int iCount=0,iDigit=0;
    while(iNo!=0)
    {
        iDigit=iNo%10;
        if(iDigit%2==0)
        {
            iCount++;
        }
        iNo=iNo/10;
    }
    return iCount;
    
    
}

int main()
{
    int iValue=0,iRet=0;

    printf("Enter the number:\n");
    scanf("%d",&iValue);

    iRet=CountEvenI(iValue);

    printf("Number of digits:%d\n",iRet);
    
    return 0;
}