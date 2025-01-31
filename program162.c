#include<stdio.h>
#include<string.h>

void Display(char *str)
{
    printf("Entered String is: %s\n",str);

    while(*str!='\0')
    {
        printf("%c\n",*str);
        str++;
    }
}
int main()
{
    char Arr[30];
    int iRet=0;

    printf("Enter String:");
    scanf("%[^'\n']s",Arr);
    
    iRet=strlen(Arr);
    
    printf("String length is:%d\n",iRet);

    return 0;
}
