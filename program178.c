#include<stdio.h>
//Call by Address
void strlwrX(char *str)
{
    while(*str!='\0')
    {
        if(*str>='A' && *str<='Z')
        {
            *str=*str+32;
        }
        str++;
    }
}
int main()
{
    char Arr[30];

    printf("Enter String:");
    scanf("%[^'\n']s",Arr);

    strlwrX(Arr);

    printf("String after updation is:%s\n",Arr);

    return 0;
}