#include<stdio.h>
void Display(int *ptr)
{
    printf("Values of the Array are:\n");
    printf("%d\n",*ptr);
    ptr++;
    printf("%d\n",*ptr);
    ptr++;
    printf("%d\n",*ptr);
    ptr++;
    printf("%d\n",*ptr);
}
int main()
{
    int Arr[4];
    int iCnt=0;

    printf("Please Enter the Values :\n");
    for(iCnt=0;iCnt<4;iCnt++)
    {
        scanf("%d",&Arr[iCnt]);
    }

    Display(Arr);   //Display(100);


    return 0;
}