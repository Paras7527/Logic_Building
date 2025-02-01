#include<stdio.h>
//Call by Address
void Update(char *str)
{
    while(*str!='\0')
    {
        if(*str=='a')
        {
            *str='d';
        }
        str++;
    }
}
int main()
{
    char Arr[30];

    printf("Enter String:");
    scanf("%[^'\n']s",Arr);

    Update(Arr);

    printf("String after updation is:%s\n",Arr);

    return 0;
}