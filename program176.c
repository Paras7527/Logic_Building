#include<stdio.h>
#include<stdbool.h>
bool Count(char *str, char ch)
{
    bool bFlag=false;

    while(*str!='\0') 
    {
        if(*str==ch)
        {
            bFlag=true;
            break;
        }
        str++;
    }
    return bFlag;
}
int main()
{
    char Arr[30];
    bool bRet=0;
    char cValue='\0';
    


    printf("Enter String:");
    scanf("%[^'\n']s",Arr);

    printf("Enter the character: \n");
    scanf(" %c",&cValue);


    bRet=Count(Arr,cValue);
    if(bRet==true)
    {
        printf("character is present\n");
    }
    else
    {
        printf("There is no such character\n");
    }

    return 0;
}