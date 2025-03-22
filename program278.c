#include<stdio.h>

int DisplayI(int iNo)
{
    int iSum=0;
    int iCnt=1;
    while(iCnt<=iNo)
    {
        iSum=iSum+iCnt;
        iCnt++;
    }
    return iSum;
    
    
}

int main()
{
    int iValue=0,iRet=0;

    printf("Enter the freq:\n");
    scanf("%d",&iValue);

    iRet=DisplayI(iValue);

    printf("Addition is:%d\n",iRet);
    
    return 0;
}