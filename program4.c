#include<stdio.h>

int main()
{
    int iNo1=0;
    int iNo2=0;
    int iAns=0;

    printf("First number is:");
    scanf("%d",&iNo1);

    printf("Second number is:");
    scanf("%d",&iNo2);

    iAns=iNo1+iNo2;

    printf("Addition of Two number is:%d",iAns);
    
    return 0;
}

/*

FORMAT SPECIFIERS:

%d INT

%f FLOAT

%c CHAR

%lu DOUBLE

*/