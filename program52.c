#include<stdio.h>
int main()
{
    int iDigit=0;
    int iNo=78945;
    while(iNo>0)
    {
        iDigit=iNo%10;
        printf("%d\n",iDigit);
        iNo=iNo/10;
    }
    return 0;
}