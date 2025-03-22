#include<stdio.h>

int main()
{
    char Arr[30];

    printf("Enter String:");
    scanf("%[^'\n']s",Arr);

    printf("Entered String is: %s\n",Arr);

    return 0;
}