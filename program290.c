#include<stdio.h>

int CountSmall(char *str)
{
    static int iCount=0;
    if(*str!=0)
    {
        if(*str>='a' && *str<='z')
        {
        iCount++;
        }
        str++;
        CountSmall(str);
    }
    return iCount;
}

int main()
{
    char Arr[30];
    int iRet=0;

    printf("Enter String:\n");
    scanf("%[^'\n']s",Arr);

    iRet=CountSmall(Arr);

    printf("Capital Small is:%d\n",iRet);

    return 0;
}