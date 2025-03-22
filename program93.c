#include<stdio.h>
#include<stdlib.h>
float Average(int ptr[],int iSize)
{
    int iSum=0,iCnt=0;
    
    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        iSum=(iSum+ptr[iCnt]);
    }
    return (float)iSum/(float)iSize;
}
int main()
{
    int *ptr=NULL;
    int iLength=0,iCnt=0;
    float fRet=0;

    //Step1 : Accept the number of elements from user
    printf("Enter number of elements:\n");
    scanf("%d",&iLength);

    //Step2 : Allocate the memory dynamically
    ptr=(int *)malloc(iLength * sizeof(int));

    //Step3 : Accept the values and store into the Dynamic memory
    printf("Enter the elements:\n");
    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }


    //Step4 : Perform the operations (Logic)
    fRet=Average(ptr,iLength);
    printf("Average is: %f",fRet);

    //Step5 : Deallocate the memory
    free(ptr);
    return 0;
}