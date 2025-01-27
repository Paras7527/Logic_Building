#include<stdio.h>
int main()
{
    int Arr[4];
    int iCnt=0;
    printf("Please Enter the Values :\n");
    scanf("%d",&Arr[0]);
    scanf("%d",&Arr[1]);
    scanf("%d",&Arr[2]);
    scanf("%d",&Arr[3]);

    printf("Values From the Array are :\n");
    for(iCnt=0;iCnt<=3;iCnt++)
    {
        printf("%d\n",Arr[iCnt]);
    }


    return 0;
}