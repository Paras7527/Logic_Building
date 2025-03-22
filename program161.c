#include<stdio.h>

void Display(char str[])
{
    printf("Entered String is: %s\n",str);
    int i=0;
    for(i=0;str[i]!='\0';i++)
    {

        printf("%c\n",str[i]);
    }
}
int main()
{
    char Arr[30];

    printf("Enter String:");
    scanf("%[^'\n']s",Arr);

    

    Display(Arr);       //Display(100);
    return 0;
}