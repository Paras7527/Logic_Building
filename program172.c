#include<stdio.h>

int Count(char *str)
{
    int iCnt=0;

    while(*str!='\0') 
    {
        if(*str=='m')
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
    printf("Number of 'm' occours:%d\n",iRet);

    return 0;
}