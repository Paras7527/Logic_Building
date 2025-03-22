#include<stdio.h>
//  a   e   i   o   u

int Count(char *str)
{
    int iCnt=0;

    while(*str!='\0')   //Case Sensitive
    {
        if(*str=='A' || *str=='E' || *str=='I' || *str=='O'|| *str=='U' )
        {
            iCnt++;
        }
        str++;
    }
    return iCnt;
}
int main()
{
    char Arr[30];
    int iRet=0;

    printf("Enter String:");
    scanf("%[^'\n']s",Arr);

    iRet=Count(Arr);
    printf("Number is:%d\n",iRet);

    return 0;
}