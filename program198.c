
#include<stdio.h>
void DisplayR(char *str)
{
    while(*str !='\0')
    {
        printf("%c\n",*str);
        str++;
    }   

}

int main()
{
    char Arr[30];

    printf("Enter string:\n");
    scanf("%[^'\n']s",Arr);

    DisplayR(Arr);

    return 0;
}