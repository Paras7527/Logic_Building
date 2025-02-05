#include<stdio.h>

int SumDigitsE(int iNo)
{
    static int iSum=0;
    if(iNo!=0)
    {
        iSum=iSum+(iNo%10);
        iNo=iNo/10;
        SumDigitsI(iNo);
    }
    return iSum;
}

int main()
{
    int iValue=0,iRet=0;

    printf("Enter the number:\n");
    scanf("%d",&iValue);

    iRet=SumDigitsR(iValue);

    printf("Number of digits:%d\n",iRet);
    
    return 0;
}