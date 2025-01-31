#include<stdio.h>

int CountSmall(char *ptr)
{
    int iCount=0;
     while(*ptr!='\0')
    {
        if(*ptr>=97 && *ptr<=122)
        {
            iCount++;
        }
        ptr++;
    }
    return iCount;
}
int main()
{
    char Arr[30];
    char *ptr=Arr;
    int iRet=0;

    printf("Enter String:\n");
    scanf("%[^'\n']s",Arr);

    iRet=CountSmall(Arr);   //Display(100);
    printf("Count of a is: %d\n",iRet);

    return 0;
}